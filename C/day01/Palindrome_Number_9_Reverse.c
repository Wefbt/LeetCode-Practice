//
// Created by wefbt on 2022/12/27.
//

#include "stdio.h"

_Bool isPalindrome(int x){
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return 0;
    }
    int num = 0;
    while (x > num) {
        num = num * 10 + x % 10;
        x /= 10;
    }
    return (x == num || x == num / 10);
}

int main() {
    int test = 2143223412;
    printf("%d", isPalindrome(test));
    return 0;
}