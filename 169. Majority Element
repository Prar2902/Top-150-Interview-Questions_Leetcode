# Question No 169
# Given an array nums of size n, return the majority element. The majority element is the element that appears more than ⌊n / 2⌋ times. 
# You may assume that the majority element always exists in the array.

#Solution:
#Source Code:

int majorityElement(int* nums, int numsSize){
    int majority;
    int count = 0;
    for (int i = 0;i<numsSize;++i)
    {
        if (count == 0)
        {
            majority = nums[i];
            count = 1;
        }
        else if (majority == nums[i])
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    return majority;
}
