/*本题要求实现一个计算非负整数阶乘的简单函数。*/

#include <stdio.h>



int Factorial( const int N );



int main()

{

    int N, NF;

	

    scanf("%d", &N);

    NF = Factorial(N);

    if (NF)  printf("%d! = %d\n", N, NF);

    else printf("Invalid input\n");



    return 0;

}

/* 你的代码将被嵌在这里 */

int Factorial( const int N )

{

    if(N<0)

    {

        return 0;

    }

    if(N==0)

    {

        return 1;

    }

    int res=N;

    res*=Factorial(N-1);

    return res;

}