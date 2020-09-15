
/*1480. 一维数组的动态和

给你一个数组 nums 。数组「动态和」的计算公式为：runningSum[i] = sum(nums[0]…nums[i]) 。

请返回 nums 的动态和。

 * Note: The returned array must be malloced, assume caller calls free().

 */

int* runningSum(int* nums, int numsSize, int* returnSize)

{

    returnSize[0] = numsSize;

    for(int i=1 ; i<numsSize; i++)

    {

        nums[i] +=nums[i-1];

    }

    return nums;

}