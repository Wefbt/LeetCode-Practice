//
// Created by wefbt on 2023/1/3.
//
#include <stdio.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int i = m - 1, j = n - 1;
    for (int k = m + n - 1; k >= 0; k--) {
        if (i < 0) {
            *(nums1 + k) = *(nums2 + j);
            j--;
        } else if (j < 0) {
            *(nums1 + k) = *(nums1 + i);
            i--;
        } else if (nums1[i] < nums2[j]) {
            *(nums1 + k) = *(nums2 + j);
            j--;
        } else {
            *(nums1 + k) = *(nums1 + i);
            i--;
        }
    }
}

int main() {
    int nums1[] = {1,2,3,0,0,0};
    int nums2[] = {2,5,6};
    int m = 3, n = 3;
    merge(nums1, 6, m, nums2, 3, n);
    for (int i = 0; i < 6; ++i) {
        printf("%d, ", nums1[i]);
    }
    return 0;
}