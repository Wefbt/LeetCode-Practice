#include <stdio.h>

void moveZeroes(int* nums, int numsSize){
    int count = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) count++;
    }
    if (count == 0) return;
    int read = 0, write = 0;
    while (read < numsSize) {
        if (nums[read] != 0) {
            nums[write] = nums[read];
            write++;
            read++;
        } else {
            read++;
        }
    }
    for (int i = write; i < numsSize; i++) nums[i] = 0;
}

int main() {
    int nums[] = {0,1,0,3,12};
    moveZeroes(nums, 5);
    for (int i = 0; i < 5; ++i) {
        printf("%d ", nums[i]);
    }
}
