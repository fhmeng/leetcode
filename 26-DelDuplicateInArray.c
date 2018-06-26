int removeDuplicates(int* nums, int numsSize) {
    int i,j;
    i=0;
    j=0;
    
    if(numsSize==0)
        return 0;
    
    while(j<numsSize-1)
    {
        if(nums[j]!=nums[j+1])
        {
            i++;
            nums[i]=nums[j+1];
        }
        j++;
    }
    return i+1;
}