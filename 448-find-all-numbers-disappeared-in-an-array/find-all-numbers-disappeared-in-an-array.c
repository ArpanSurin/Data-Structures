/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)malloc(numsSize * sizeof(int));
    int index = 0;

    // Mark visited numbers
    for (int i = 0; i < numsSize; i++) {
        int val = abs(nums[i]) - 1; // Convert value to index
        if (nums[val] > 0) {
            nums[val] = -nums[val];
        }
    }

    // Find missing numbers
    for (int i = 0; i < numsSize; i++) { // Iterate from 0 to numsSize - 1
        if (nums[i] > 0) {
            result[index++] = i + 1; // Add 1 because numbers are 1-based
        }
    }

    *returnSize = index;
    return result;
}
