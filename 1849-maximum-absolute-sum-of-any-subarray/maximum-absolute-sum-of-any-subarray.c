int maxAbsoluteSum(int* nums, int numsSize) {
    int sum = 0, maxsum = 0, minsum = 0;
    for (int i=0; i<numsSize; i++){
        sum += nums[i];
        if (maxsum < sum) maxsum = sum;
        if (minsum > sum) minsum = sum;
    }
    return abs(maxsum - minsum);
}