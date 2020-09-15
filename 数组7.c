/*

给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。



不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。



元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。*/

#include<stdio.h>

int removeElement(int* nums, int numsSize, int val)

{

    int s = 0,i;

    for(i=0;i<numsSize;i++)

    {

        if(nums[i]!=val)

        nums[s++] = nums[i];

    }

    return s;

}

int main()

{

	int a[10],n,val,i;

    scanf("%d %d",&n,&val);

	for(i =0;i < n;i++)

	{

		scanf("%d",&a[i]);

	}

	removeElement(a,n,val);

	return 0;



}