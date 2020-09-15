#include<stdio.h>

int main()

{

	int m,n,i,j,g,x,z;

	printf("m=");

	scanf("%d",&m);

	printf("n=");

	scanf("%d",&n);

	if(m>n)

		z=n;

	else z=m;

	

	x=1;

	for(i=2;i<=z/2;i++)

	{

		if(m%i==0&&n%i==0)

		{

			if(i>x)

				x=i;

		}

	}

	printf("最大公因数x=%d\n",x);

    

	for(j=2;j<=m;j++)

	{

		for(g=2;g<=n;g++)

			if(j*n==g*m)

			{

				printf("最大公倍数=%d",j*n);

			}

			break;

	}

			return 0;

    

}