//
// Created by wefbt on 2022/12/28.
//
#include "stdio.h"
#include "malloc.h"

int* sortedSquares(const int* nums, int numsSize, int* returnSize){
    int * result = (int * ) malloc(sizeof(int) * numsSize);
    int startIndex = 0, endIndex = numsSize - 1;
    for (int i = numsSize - 1; i >= 0; i--) {
        int start = nums[startIndex] * nums[startIndex], end = nums[endIndex] * nums[endIndex];
        if (start > end) {
            result[i] = start;
            startIndex++;
        } else {
            result[i] = end;
            endIndex--;
        }
    }
    *returnSize = numsSize;
    return result;
}

int main() {
    int size = 0;
    int nums[] = {-4,-1,0,3,10};
    int *returnSize = &size;
    int * result = sortedSquares(nums, 5, returnSize);
    printf("%d,%d,%d,%d,%d", result[0], result[1], result[2], result[3], result[4]);
    return 0;
}
