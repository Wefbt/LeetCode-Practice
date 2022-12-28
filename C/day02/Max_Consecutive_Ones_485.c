//
// Created by wefbt on 2022/12/28.
//

#include "stdio.h"

int findMaxConsecutiveOnes(const int* nums, int numsSize){
    int max = 0;
    int num = 0;
    for (int i = 0; i < numsSize; i++) {
        if (*(nums + i) == 1) {
            if (++num > max) {
                max = num;
            }
        } else {
            num = 0;
        }
    }
    return max;
}

int main() {
    int nums[] = {1,1,0,1,1,1};
    printf("%d", findMaxConsecutiveOnes(nums,6));
    return 0;
}