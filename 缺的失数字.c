/*

一个长度为n-1的递增排序数组中的所有数字都是唯一的，并且每个数字都在范围0～n-1之内。在范围0～n-1内的n个数字中有且只有一个数字不在该数组中，请找出这个数字。

示例 1:



输入: [0,1,3]

输出: 2

示例 2:



输入: [0,1,2,3,4,5,6,7,9]

输出: 8

*/

int missingNumber(int* nums, int numsSize)

{

    int a[numsSize+1],i,flag;

    flag=0;

    for(i=0;i<numsSize+1;i++)   //把数组nums还原到a中

    {

        a[i]=i;

    }

    for(i=0;i<numsSize;i++)   //然后逐一比较

    {

        if(nums[i]!=a[i])   //如果不相等，说明找到确实的数字了，令flag=1，退出循环

        {

            flag=1;

            return a[i];

            break;

        }

    }

    if(!flag)//如果flag不成立，说明没找到，则返回数组a的最后一个元素

    {

        return a[numsSize];

    }

    return 0;

}