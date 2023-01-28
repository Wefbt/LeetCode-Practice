#include <stdio.h>

int heightChecker(int* heights, int heightsSize){
    int output = 0;
    for(int i = 0; i < heightsSize; ++i) {
        int scount = 0, bcount = 0;
        for(int j = 0; j < heightsSize; ++j) {
            if (heights[j] < heights[i]) {
                scount++;
            } else if (heights[j] > heights[i]) {
                bcount++;
            }
            if (scount > i || bcount > heightsSize - i - 1) {
                output++;
                break;
            }
        }
    }
    return output;
}

int main() {
    int nums[] = {1,1,4,2,1,3};
    int output = heightChecker(nums, 6);
    printf("%d", output);
}