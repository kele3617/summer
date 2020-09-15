

/****************海伦公式***********************/

#include<stdio.h>

#include<math.h> 

int main()

{

	int a,b,c;

	float p,s;

	printf("Enter a and b and c:");         //输入边长

	scanf("%d%d%d",&a,&b,&c);

	p = 1.0*(a+b+c)/2;                          //海伦公式

	s = sqrt(p*(p-a)*(p-b)*(p-c));

	printf("The area is %.2f\n",s);



}