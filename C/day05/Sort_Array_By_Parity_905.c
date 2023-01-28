# include <stdio.h>

int* sortArrayByParity(int* nums, int numsSize, int* returnSize){
    int count = 0;
    for(int i = 0; i < numsSize - count - 1; ++i) {
        if (nums[i] & 1) {
            while (numsSize - count - 1 > i) {
                if ((nums[numsSize - count - 1] & 1) == 0) {
                    int temp = nums[i];
                    nums[i] = nums[numsSize - count - 1];
                    nums[numsSize - count - 1] = temp;
                    break;
                }
                ++count;
            }
        }
    }
    *returnSize = numsSize;
    return nums;
}

int main() {
    int nums[] = {1, 2, 3, 4, 5};
    int returnSize = 0;
    int* num = sortArrayByParity(nums, 5, &returnSize);
    for (int i = 0; i < returnSize; ++i) {
        printf("%d ", num[i]);
    }
}