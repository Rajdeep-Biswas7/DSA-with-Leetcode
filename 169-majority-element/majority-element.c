#include <stdio.h>

int majorityElement(int* nums, int n) {
    int count = 0, candidate = 0;

    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
        }

        if (nums[i] == candidate)
            count++;
        else
            count--;
    }

    return candidate;
}

