/*����һ����СΪ n �����飬�ҵ����еĶ���Ԫ�ء�����Ԫ����ָ�������г��ִ������� ? n/2 ? ��Ԫ�ء�



����Լ��������Ƿǿյģ����Ҹ������������Ǵ��ڶ���Ԫ�ء�*/

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