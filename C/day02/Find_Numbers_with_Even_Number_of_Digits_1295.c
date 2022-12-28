//
// Created by wefbt on 2022/12/28.
//

#include <stdio.h>

int findNumbers(int* nums, int numsSize){
    int result = 0;
    for (int i = 0; i < numsSize; i++) {
        int digit = 1;
        while(nums[i] > 0) {
            if(nums[i] >= 10) {
                digit++;
            }
            nums[i] /= 10;
        }
        if ((digit & 1) == 0) {
            result++;
        }
    }
    return result;
}

int main() {
    int nums[] = {10,121,3560,11,12345,531};
    printf("%d", findNumbers(nums,6));
    return 0;
}