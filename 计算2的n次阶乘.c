/*

����

�������һ��������N(N<=100)������2��n�η���ֵ��

����

����һ��������N��

���

���2��N�η���ֵ��

*/

#include<cstdio>

int a[100000];

int main()

{

	int n=0;

	scanf("%d",&n);

	a[1]=1;

	int k = 1;

	for(int i = 1; i <= n; ++i)

	{

		int x=0;

		for(int j = 1; j  <=k; ++j)

		{

			a[j] = a[j]*2+x;

			x = a[j]/10;

			a[j] = a[j]%10;

			if(x!=0 && j==k) k++;//���㵽���λ�����н�λ�����ȼ�1 

		}	

	}

	for(int i = k; i >= 1; --i) printf("%d",a[i]); 

	return 0;

} 