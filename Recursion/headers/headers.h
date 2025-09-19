#pragma once

#include <stdio.h>
#include <stdlib.h>

// this is non-tail recursive factorial
int factorial(int n);
// this is tail recursive factorial
int factAux(int acc, int n);
int factTail(int n);