/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int i,j;
    bool flag=false;
    int* re = malloc(2*sizeof(int));
    
    for(i=0;i<numsSize-1;i++)
    {
        for(j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                re[0]=i;
                re[1]=j;
                flag=true;
                break;
            }
        }
        
        if(flag)
        {
            break;
        }
    }
    
    return re;
}