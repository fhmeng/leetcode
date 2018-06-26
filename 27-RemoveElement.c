int removeElement(int* nums, int numsSize, int val) {
    int i,j;
    int len=numsSize;
    i=0;
    j=numsSize-1;
    
    while(i<=j)
    {
        if(nums[j]==val)
        {
            j--;
            len--;
            continue;
        }
        
        if(nums[i]==val)
        {   
            nums[i]=nums[j];
            j--;
            len--;
        }
        
        i++;
    }
    
    return len;
}s