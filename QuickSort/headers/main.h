#pragma once

#include <stdio.h>
#include <stdlib.h>

void quick_sort(int arr[], int low, int high);
int partition(int arr[], int low, int high);
void swap(int*, int*);

void printArr(int arr[], int length);