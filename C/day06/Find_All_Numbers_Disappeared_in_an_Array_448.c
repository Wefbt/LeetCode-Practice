
#include <stdio.h>
#include <stdlib.h>

int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize){
    for (int i = 0; i < numsSize; ++i) {
        int temp = abs(nums[i]) - 1;
        nums[temp] = -1 * abs(nums[temp]);
    }
    int index = 0;
    *returnSize = 0;
    for (int i = 0; i < numsSize; ++i) {
        if (nums[i] > 0) {
            (*returnSize)++;
            nums[index++] = i + 1;
        }
    }
    return nums;
}

int main() {
    int nums[] = {1, 2, 3, 3, 5};
    int returnSize = 0;
    findDisappearedNumbers(nums, 5, &returnSize);
    for (int i = 0; i < returnSize; ++i) {
        printf("%d ", nums[i]);
    }
}
