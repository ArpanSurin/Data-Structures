/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)malloc(numsSize * sizeof(int));
    int index = 0;

    for (int i=0; i<numsSize; i++){
        int val = abs(nums[i]) - 1;
        if (nums[val] > 0)
            nums[val] = -nums[val];
    }

    for(int i=0; i<numsSize; i++){
        if(nums[i] > 0)
            result[index++] = i+1;
    }
    *returnSize = index;
    return result;
}