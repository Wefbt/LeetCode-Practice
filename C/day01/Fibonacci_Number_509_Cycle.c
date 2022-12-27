//
// Created by wefbt on 2022/12/26.
//
#include "stdio.h"

int fib(int n){
    int result = 0, e = 1;
    while (n--) {
        result = (e += result) - result;
    }
    return result;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("result: %d", fib(n));
    return 0;
}