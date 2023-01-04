//
// Created by wefbt on 2023/1/4.
//

#include <stdio.h>

_Bool validMountainArray(const int* arr, int arrSize) {
    if (arrSize < 3) return 0;
    int down = 0;
    for (int i = 1; i < arrSize; ++i) {
        if (arr[0] > arr[1]) return 0;
        if (down == 0) {
            if (arr[i] < arr[i-1]) {
                down = 1;
            } else if (arr[i] == arr[i-1]) {
                return 0;
            }
        } else {
            if (arr[i] >= arr[i - 1]) return 0;
        }
    }
    if (down == 0) return 0;
    return 1;
}

int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arrSize = 10;
    _Bool result = validMountainArray(arr, arrSize);
    printf("%d", result);
    return 0;
}