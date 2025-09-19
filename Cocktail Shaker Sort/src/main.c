#include "../headers/main.h"

int main(){
    srand(time(NULL));
    int arr[100];
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < size; i++) {
        arr[i] = rand() % ((100 - 0 + 1) + 0);
    }
    cocktail_shaker_sort(arr, size, compare_asc);

    printf("the sorted array is: \n\n");
    print_array(arr, size);

    return 0;
}

int compare_asc(int a, int b) {
    return a > b;
}

int compare_desc(int a, int b) {
    return a < b;
}

void cocktail_shaker_sort(int arr[], int size, compare_func cmp) {
    int swapped = 1;
    int start = 0;
    int end = size - 1;

    while(swapped) {
        swapped = 0;
        //forward sweep
        for(int i = start; i < end; i++) {
            if(cmp(arr[i], arr[i + 1])) {
                arr[i] = arr[i] ^ arr[i + 1];
                arr[i + 1] = arr[i] ^ arr[i + 1];
                arr[i] = arr[i] ^ arr[i + 1];
                swapped = 1;
            }
        }

        if(!swapped){
            break;
        }
        swapped = 0;
        end--;
        //backward sweep
        for(int i = end; i >= start; i--) {
            if(cmp(arr[i], arr[i + 1])) {
                arr[i] = arr[i] ^ arr[i + 1];
                arr[i + 1] = arr[i] ^ arr[i + 1];
                arr[i] = arr[i] ^ arr[i + 1];
                swapped = 1;
            }
        }
        start++;
    }
}

void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d element = %d\n", i + 1, arr[i]);
    }
}