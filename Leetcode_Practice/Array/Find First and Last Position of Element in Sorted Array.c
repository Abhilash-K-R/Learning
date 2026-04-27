/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    
    int *ans = (int*)malloc(2*sizeof(int));
    *returnSize = 2;
    
    ans[0] = -1;
    ans[1] = -1;

    for(int i=0; i<numsSize; i++){
        if(nums[i] == target){
            if(ans[0] == -1)
                ans[0] = i; // first position
            
            ans[1] = i; // keep updating last position
        }
    }

    return ans;
}
