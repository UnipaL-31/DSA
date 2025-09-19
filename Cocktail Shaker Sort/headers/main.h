#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef int (*compare_func)(int a, int b);

int compare_asc(int, int);
int compare_desc(int, int);
void cocktail_shaker_sort(int arr[], int size, compare_func cmp);
void print_array(int arr[], int size);