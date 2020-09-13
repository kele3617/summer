#include <stdio.h>

#define N 10

int main()

{

    int i,a[N],j,t,x;

    for(i=0;i<N;i++)

    {

        scanf("%d",a+i);

    }

    for(i=0;i<N-1;i++) 

    {

        t=i;

        for(j=i+1;j<N;j++)

        {

            if(a[t]>a[j])

            {

                x=a[t];

                a[t]=a[j];

                a[j]=x;

            }

        }

    }

    for(i=0;i<N;i++)

    {

        printf("%4d",a[i]);

    }

}