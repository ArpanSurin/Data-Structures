int* applyOperations(int* nums, int numsSize, int* returnSize) {
    int* newNums = (int*)calloc(numsSize, sizeof(int)); 
    int count = 0;
    int i;

    for (i = 0; i < numsSize - 1; i++) {
        if (nums[i] != 0) {
            if (nums[i] == nums[i + 1]) {
                newNums[count] = nums[i] * 2;
                i++; 
            } else {
                newNums[count] = nums[i];
            }
            count++;
        }
    }

    if (i < numsSize && nums[i] != 0) {
        newNums[count] = nums[i];
    }

    *returnSize = numsSize;
    return newNums;
}