

#include<stdio.h>

int fun(int a,int b)

{

	return b ? fun(b,a%b) : a;	

}

int main()

{

	int a,b;

	while(scanf("%d%d",&a,&b)!=EOF)

	{

	      printf("%d\n",a>b?fun(a,b):fun(b,a));

	}

	return 0;

}