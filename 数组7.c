/*

����һ������ nums ��һ��ֵ val������Ҫ ԭ�� �Ƴ�������ֵ���� val ��Ԫ�أ��������Ƴ���������³��ȡ�



��Ҫʹ�ö��������ռ䣬������ʹ�� O(1) ����ռ䲢 ԭ�� �޸��������顣



Ԫ�ص�˳����Ըı䡣�㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�*/

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