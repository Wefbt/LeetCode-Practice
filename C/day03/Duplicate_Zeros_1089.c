#include <stdio.h>

void duplicateZeros(int* arr, int arrSize){
    int count = 0;
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] == 0) count++;
    }

    int newArr[arrSize + count];
    for (int i = arrSize + count - 1,j = arrSize - 1; j >= 0; j--) {
        newArr[i] = arr[j];
        i--;
        if (arr[j] == 0) {
            newArr[i] = arr[j];
            i--;
        }
    }

    for (int i = 0; i < arrSize; i++) arr[i] = newArr[i];
}

int main() {
    int arr[8] = {1,0,2,3,0,4,5,0};
    duplicateZeros(arr, 8);
    for (int i = 0; i < 8; ++i) {
        printf("%d, ", arr[i]);
    }
    return 0;
}
