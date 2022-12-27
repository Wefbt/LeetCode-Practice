//
// Created by wefbt on 2022/12/27.
//
#include "stdio.h"
_Bool isPalindrome(int x){
    if (x < 0) {
        return 0;
    }
    int i = 1;
    long e = 10;
    for(; x / e != 0; i++) {
        e *= 10;
    }
    char str[i+1];
    sprintf(str, "%d", x);
    for(int j = 0; i - 1 - j > j; j++) {
        if (str[j] != str[i - 1 - j]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int test = 121;
    printf("%d",isPalindrome(test));
    return 0;
}