
/*1480. һά����Ķ�̬��

����һ������ nums �����顸��̬�͡��ļ��㹫ʽΪ��runningSum[i] = sum(nums[0]��nums[i]) ��

�뷵�� nums �Ķ�̬�͡�

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