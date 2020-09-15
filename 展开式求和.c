#include <stdio.h>

#include <math.h>

double fact(int n);

int main ()

{

	int t;

	double a,b,x,s,m;

	t=s=0;

	m=1;

	a=b=1;

	printf ("x=");

    scanf ("%lf",&x);

	while (m>=0.00001)

	{s=s+m;

	a=pow(x,t);

	t++;

	b=fact(t);

	m=a/b;

	}

	printf("%.5f",s);

	return 0;

}



	double fact (int n)

	{

	int i;double sum=1;

	for(i=1;i<=n;i++)

       sum=sum*i;

	return sum;

	}

