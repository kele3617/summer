/*
����һ������ nums����дһ������������ 0 �ƶ��������ĩβ��ͬʱ���ַ���Ԫ�ص����˳��
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