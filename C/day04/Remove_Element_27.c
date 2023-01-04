//
// Created by wefbt on 2023/1/4.
//

#include <stdio.h>

int removeElement(int* nums, int numsSize, int val){
    int count = 0;
    for (int i = 0; i < numsSize - count; ++i) {
        while (nums[i + count] == val) {
            count++;
            if (i >= numsSize -count) return numsSize - count;
        }
        nums[i] = nums[i + count];
    }

    return numsSize - count;
}

int main() {
    int  nums[] = {3,2,2,3};
    int val = 3;
    int numsSize = 4;

    int length = removeElement(nums, numsSize, val);

    for (int i = 0; i < length; ++i) {
        printf("%d, ", nums[i]);
    }
    return 0;
}
