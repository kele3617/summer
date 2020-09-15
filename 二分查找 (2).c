
/* Ѱ�ҷ�ֵ

��ֵԪ����ָ��ֵ������������ֵ��Ԫ�ء�

����һ���������� nums������ nums[i] �� nums[i+1]���ҵ���ֵԪ�ز�������������
������ܰ��������ֵ������������£������κ�һ����ֵ����λ�ü��ɡ�

����Լ��� nums[-1] = nums[n] = -�ޡ�

ʾ�� 1:

����: nums = [1,2,3,1]

���: 2

����: 3 �Ƿ�ֵԪ�أ���ĺ���Ӧ�÷��������� 2��

ʾ�� 2:

����: nums = [1,2,1,3,5,6,4]

���: 1 �� 5 

����: ��ĺ������Է������� 1�����ֵԪ��Ϊ 2��

     ���߷������� 5�� ���ֵԪ��Ϊ 6��*/

#include<stdio.h>

int findPeakElement(int* nums, int numsSize)

{

    int i = 0,j = numsSize-1;

    while(i<j)

    {

        int mid = (i+j)/2;

        if(nums[mid] > nums[mid+1])

        {

            j = mid;

        }

        else

        {

            i = mid+1;

        }

    }    

    return i;

}

void main()

{

	int a[100];

	int i,n;

	scanf("%d",&n);

	for(i=0;i<n;i++)

	{

		scanf("%d",&a[i]);

	}

	printf("%d",findPeakElement(a,n));



	return 0;

}