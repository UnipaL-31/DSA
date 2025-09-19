#include "../headers/main.h"

/*
    Author: Sebastiano D'Angelo
    Program: QuickSort algorithm implementation
*/

int main(){
    int arr[] = {3, 5, 1, 2, 7, 19, 23, 1, 2, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    quick_sort(arr, 0, size - 1);
    printArr(arr, size);
    
    return 0;
}

void quick_sort(int arr[], int low, int high) {
    if(low < high) {
        int part = partition(arr, low, high);

        quick_sort(arr, low, part - 1);
        quick_sort(arr, part + 1, high);
    }
}

int partition(int arr[], int low, int high) {
    int pivot = arr[low]; //choosing the first element as pivot
    int i = low; //counter for left side
    int j = high; //counter for right side

    while(i < j) {
        while(arr[i] <= pivot && i < high) i++; //finding the first element greater than the pivot from left
        while(arr[j] > pivot && j > low) j--; //finding the first element smaller than the pivot from right
        if(i < j) swap(&arr[i], &arr[j]); //we swap the elements
    }
    swap(&arr[low], &arr[j]);
    return j;
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArr(int arr[], int length) {
    for(int i = 0; i < length; ++i) printf("%d: %d\n", i+1, arr[i]);
}