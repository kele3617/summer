#include<stdio.h>

#include<math.h>

int is(int number);

int main ()

{

	int number,m,n,flag;

	printf("m=");

	scanf("%d",&m);

    printf("n=");

	scanf("%d",&n);

	for(number=m;number<=n;number++)

	{

		flag=is(number);

		if(flag==1)

			printf("%d  ",number);

	}



return 0;

}



int is(int number)

{

	int result,a,x;

	int sum;

	sum=0;

	x=number;

	while(x>0)

	{

		a=x%10;

		sum=sum+pow(a,3);

		x=x/10;

	}

	if(sum==number)

		result=1;

	else result=0;

	return result;

}