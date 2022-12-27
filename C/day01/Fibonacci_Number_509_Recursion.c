//
// Created by wefbt on 2022/12/26.
//
#include "stdio.h"

int fib(int n){
    if (n > 1) {
        return fib(n - 1) + fib (n-2);
    } else {
        return n;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("result: %d", fib(n));
    return 0;
}