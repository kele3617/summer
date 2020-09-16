
/*面试题 08.05. 递归乘法

递归乘法。 写一个递归函数，不使用 * 运算符， 实现两个正整数的相乘。可以使用加号、减号、位移，但要吝啬一些。



示例1:



 输入：A = 1, B = 10

 输出：10

示例2:



 输入：A = 3, B = 4

 输出：12*/

#include<stdio.h>

int multiply(int A, int B)

{

    if (A > B) return multiply(B, A);

    if (A == 0) return 0;

    return B + multiply(A - 1, B);

}

int main()

{

	int a,b;

	scanf("%d %d",&a,&b);

	printf("%d",multiply(a,b));



	return 0;

}