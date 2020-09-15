/******************筛法求素数******************************/

#include<stdio.h>

#define N 100

int main()

{

    int a[N+1];

    int i,j;

    for(i=1;i<=N;i++)

    {

        a[i]=1;                          //将所有数字标记为“1”

    }

    for(i=2;i*i<=N;i++)

    {

        if(a[i]==1)

        {

            for(j=i*2;j<=N;j=j+i)       //将所有i的倍数标记为“0”

            {

                a[j]=0;

            }

        }

    }

    for(i=2;i<=N;i++)

    {

        if(a[i]==1)

        printf("%d ",i);              //输出所有标记为“1”的数   也就是素数

    }

}