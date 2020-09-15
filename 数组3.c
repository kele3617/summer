/*
给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。
*/

#include<stdio.h>

void moveZeroes(int* nums, int numsSize)

{

    int j = 0;

    for(int i=0;i<numsSize;i++)

    {

        if(nums[i] != 0)

        {

            nums[j] = nums[i];

            if(i!=j)

            {

                nums[i] = 0;

            }

            j++;

        }   

        

        

    }

}

int main()

{

	int n,a[100];

	scanf("%d",&n);

	for(int i=0;i<n;i++)

	{

		scanf("%d",&a[i]);

	}

    moveZeroes(a,n);

	return 0;

}