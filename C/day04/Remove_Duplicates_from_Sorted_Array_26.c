//
// Created by wefbt on 2023/1/4.
//

#include <stdio.h>

int removeDuplicates(int* nums, int numsSize){
    int count = 0;
    for (int i = 0; i < numsSize - count - 1; i++) {
        while (nums[i] == nums[i + count + 1]) {
            count++;
            if (i >= numsSize -count - 1) return numsSize -count;
        }
        nums[i + 1] = nums[i + count + 1];
    }
    return numsSize - count;
}

int main() {
    int  nums[] = {0, 1, 1, 1, 2,2,3, 4, 4};
    int numsSize = 9;

    int length = removeDuplicates(nums, numsSize);

    for (int i = 0; i < length; ++i) {
        printf("%d, ", nums[i]);
    }
    return 0;
}