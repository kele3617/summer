#include<stdio.h>

double fact(int n);

void main()



{

	int i;

	double sum=0;

	for(i=1;i<=100;i++)

		sum=sum+fact(i);

	printf("1!+2!+...+100!=%lf",sum);

}

double fact(int n)

{

	int i;

	double result;

	result=1;

	for(i=1;i<=n;i++)

		result=result*i;

	return result;

}