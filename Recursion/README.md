# Recursion and Tail Recursion

the purpose of this project is to illustrate how recursion and tail recursion work respectively.

## Why tail recursion?

consider the problem of computing a factorial number, as we can see in the recursion.h header file
the way that this is implemented is as follows

```
factorial(n):
    if n == 0 then 1
    else n*factiorial(n-1)
```
suppose we want to compute the factorial of 4 the recursion tree would look like this:
```
             factorial(4) 
               /       \ 
             4    factorial(3) 
            /             \ 
          3          factorial(2) 
         /                   \ 
       2                factorial(1) 
      /                         \ 
    1                       factorial(0) 
                                    \ 
                                     1
```
the maximum recursion depth here is O(n)

in the case of tail recursion the function becomes the following: 
```
factAux(m, n):
    if n == 0 then m
    else factAux(m*n, n-1)

factTail(n):
    return factAux(1, n)
```
while at a first glance it looks like nothing changed a more in depth analysis reveals that the pattern of calls has
changed to this:

```
    factTail(4) 
           | 
    factAux(1,4) 
           | 
    factAux(4,3) 
           | 
    factAux(12,2) 
           | 
    factAux(24,1) 
           | 
    factAux(24,0) 
           | 
          24 
```
The maximum recursion depth here is also O(n) but none of the calls add extra variables to the the stack and so the
compiler can discard the stack.

modern compilers often do this optimization automatically as we will show in the assembler file recursion.s