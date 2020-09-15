/*本题要求实现一个用选择法对整数数组进行简单排序的函数。*/

#include <stdio.h>

#define MAXN 10



void sort( int a[], int n );



int main()

{

    int i, n;

    int a[MAXN];



    scanf("%d", &n);

    for( i=0; i<n; i++ )

        scanf("%d", &a[i]);



    sort(a, n);



    printf("After sorted the array is:");

    for( i = 0; i < n; i++ )

        printf(" %d", a[i]);

    printf("\n");



    return 0;

}



/* 你的代码将被嵌在这里 */

void sort( int a[], int n )

{

    int i,t,x;

    for(i=0;i<n-1;i++)//选择排序法

    {

        t=i;

        for(int j=i+1;j<n;j++)

        {

            if(a[t]>a[j])

            {

                x=a[t];

                a[t]=a[j];

                a[j]=x;

            }

        }

    }

}