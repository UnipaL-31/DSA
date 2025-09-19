#include "../headers/main.h"

/*
    Author: Sebastiano D'Angelo
*/

int main(){
    Node* root = NULL;

    root = insert_node(root, 50);
    insert_node(root, 30);
    insert_node(root, 20);
    insert_node(root, 40);
    insert_node(root, 70);
    insert_node(root, 60);
    insert_node(root, 80);

    if (search_node(root, 60) != NULL) {
        printf("60 found");
    }
    else {
        printf("60 not found");
    }

    printf("\n");

    // Perform post-order traversal
    postOrder(root);
    printf("\n");

    // Perform pre-order traversal
    preOrder(root);
    printf("\n");

    // Perform in-order traversal
    inOrder(root);
    printf("\n");

    // Perform delete the node (70)
    Node* temp = delete (root, 70);
    printf("After Delete: \n");
    inOrder(root);

    free(root);
    free(temp);
    return 0;
}

int is_empty(Node* root) {
    return (root->left == NULL && root->right == NULL);
}

void print_tree(Node* root) {
    if (root != NULL) {
        printf("%d->", root->data);
        print_tree(root->left);
        print_tree(root->right);
    } else printf("NULL\n");
}

Node* create_node(int data){
    Node* tmp = (Node*)malloc(sizeof(Node));
    if(tmp == NULL) return NULL;
    else {
        tmp->data = data;
        tmp->left = NULL;
        tmp->right = NULL;
        return tmp;
    }
}

Node* delete (Node* root, int x) {
    if (root == NULL)
        return NULL;

    if (x > root->data) {
        root->right = delete (root->right, x);
    }
    else if (x < root->data) {
        root->left = delete (root->left, x);
    }
    else {
        if (root->left == NULL && root->right == NULL) {
            free(root);
            return NULL;
        }
        else if (root->left == NULL
                 || root->right == NULL) {
            Node* temp;
            if (root->left == NULL) {
                temp = root->right;
            }
            else {
                temp = root->left;
            }
            free(root);
            return temp;
        }
        else {
            Node* temp
                = findMin(root->right);
            root->data = temp->data;
            root->right = delete (root->right, temp->data);
        }
    }
    return root;
}

Node* search_node(Node* root, int key) {
    if(root == NULL || root->data == key) return root;
    if(root->data < key) return search_node(root->right, key);
    return search_node(root->left, key);
}

Node* insert_node(Node* node, int value) {
    if(node == NULL) return create_node(value);
    if(value < node->data) node->left = insert_node(node->left, value);
    else if(value > node->data) node->right = insert_node(node->right, value);
    return node;
}

void postOrder(Node* root) {
    if (root != NULL) {
        postOrder(root->left);
        postOrder(root->right);
        printf(" %d ", root->data);
    }
}


void inOrder(Node* root) {
    if (root != NULL) {
        inOrder(root->left);
        printf(" %d ", root->data);
        inOrder(root->right);
    }
}

void preOrder(Node* root) {
    if (root != NULL) {
        printf(" %d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

Node* findMin(Node* root) {
    if (root == NULL) {
        return NULL;
    }
    else if (root->left != NULL) {
        return findMin(root->left);
    }
    return root;
}