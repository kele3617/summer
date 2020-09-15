/*给定一个大小为 n 的数组，找到其中的多数元素。多数元素是指在数组中出现次数大于 ? n/2 ? 的元素。



你可以假设数组是非空的，并且给定的数组总是存在多数元素。*/

#include<stdio.h>

int majorityElement(int* nums, int numsSize)

{

    int count = 0,key = nums[0];

    for(int i = 0;i < numsSize;i++)

    {

        if(nums[i] == key)

        {

            count++;

        }

        else

        {

            count--;

        }

        if(count<=0)

        {

            key = nums[i+1];

        }

    }

    return key;



}

int main()

{

	int n,a[100];

	scanf("%d",n);

	for(int i = 0;i < n;i++)

	{

		scanf("%d",&a[i]);

	}

	printf("%d ",majorityElement(a,n));



}