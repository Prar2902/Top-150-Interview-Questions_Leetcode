//Writing the function removeElement to carry out the needful..
int removeElement(int* nums, int numsSize, int val){
    int i, k = 0;
    for (int i = 0;i<numsSize;++i)
    {
        if(nums[i] != val)
        {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}
