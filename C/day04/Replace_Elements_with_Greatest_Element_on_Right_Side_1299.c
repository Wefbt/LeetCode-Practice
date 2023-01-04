//
// Created by wefbt on 2023/1/4.
//

int* replaceElements(int* arr, int arrSize, int* returnSize){
    int max = -1, temp = 0;
    for(int i = arrSize - 1; i >= 0; i--) {
        temp = max;
        if (arr[i] > max) max = arr[i];
        arr[i] = temp;
    }
    *returnSize = arrSize;
    return arr;
}