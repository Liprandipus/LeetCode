/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){


        int *ints = malloc(2*sizeof(int));
        for (int i = 0 ; i < numsSize ; i++){
            for (int j = 0 ; j < i ; j++){
                if (nums[i] + nums[j] == target){
                    ints[0] = j;
                    ints[1] = i;
                    *returnSize = 2;
                    return ints;
                }
            }
        }
        free(ints);
        return NULL;
}
