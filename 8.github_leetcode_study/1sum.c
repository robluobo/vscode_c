/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    //nums[]={2,7,11,15};//先注释掉
    target=9;
    numsSize=sizeof(*nums)/sizeof(nums[0]);
    int i=0,j=0;
    for(i=0;i<numsSize;i++)
    {
        j++;
        for(;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                returnSize=i,j;
            }
        }
    }
    
}
