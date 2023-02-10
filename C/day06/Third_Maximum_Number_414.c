
#include <stdio.h>

int thirdMax(const int* nums, int numsSize){
    int i = 0;
    int firstMax = nums[i];
    if (++i >= numsSize) return firstMax;
    while(nums[i] == firstMax) {
        ++i;
        if (i >= numsSize) return firstMax;
    }
    int secondMax = nums[i];
    while(nums[i] == firstMax || nums[i] == secondMax) {
        ++i;
        if (i >= numsSize) return firstMax > secondMax ? firstMax : secondMax;
    }
    int thirdMax = nums[i];

    while (thirdMax > secondMax || secondMax > firstMax) {
        if (thirdMax > secondMax) {
            int temp = thirdMax;
            thirdMax = secondMax;
            secondMax = temp;
        }
        if (secondMax > firstMax) {
            int temp = secondMax;
            secondMax = firstMax;
            firstMax = temp;
        }
    }

    for (; i < numsSize; ++i) {
        if (nums[i] > firstMax) {
            thirdMax = secondMax;
            secondMax = firstMax;
            firstMax = nums[i];
        } else if (nums[i] > secondMax && nums[i] < firstMax) {
            thirdMax = secondMax;
            secondMax = nums[i];
        } else if (nums[i] > thirdMax && nums[i] < secondMax) {
            thirdMax = nums[i];
        }
    }
    return thirdMax;
}

int main() {
    int nums[] = {1,2};
    int result = thirdMax(nums, 2);
    printf("%d", result);
}
