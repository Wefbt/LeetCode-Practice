//
// Created by wefbt on 2023/1/4.
//
#include<stdio.h>

_Bool checkIfExist(const int* arr, int arrSize){
    for (int i = 0; i < arrSize; ++i) {
        for (int j = i + 1; j < arrSize; ++j) {
            if (arr[i] == 2 * arr[j] || (arr[i] == arr[j] / 2 && (arr[j] & 1) == 0)) return 1;
        }
    }
    return 0;
}

int main() {
    int arr[] = {7,1,14,11};
    int arrSize = 4;
    _Bool result = checkIfExist(arr, arrSize);
    printf("%d", result);
    return 0;
}