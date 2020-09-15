/*����һ�����飬�������е�Ԫ�������ƶ� k ��λ�ã����� k �ǷǸ�����*/

#include<stdio.h>

void reverse(int*a, int size)

{

	int i,tmp;

    if (size < 2)

    {

        return;

    }

    for (i = 0; i < size/2; ++i) {

        tmp = a[i];

        a[i] = a[size - 1 - i];

        a[size - 1 - i] = tmp;

    }

}

void rotate(int* nums, int numsSize, int k)

{

    k = k%numsSize;

    reverse(nums,  numsSize);

    reverse(nums, k);

    reverse(nums + k, numsSize - k);

}

int main()

{

	int a[100];

	int i,k,n;

	scanf("%d %d",&n,&k);

	for(i = 0;i < n;i++)

	{

		scanf("%d",&a[i]);

	}

	rotate(a,n,k);

	for(i = 0;i < n;i++)

	{

		printf("%d ",a[i]);

	}

    return 0;

}