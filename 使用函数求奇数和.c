/*����Ҫ��ʵ��һ������������N�����������������ĺͣ�ͬʱʵ��һ���ж���ż�Եĺ�����*/

#include <stdio.h>



#define MAXN 10



int even( int n );

int OddSum( int List[], int N );



int main()

{    

    int List[MAXN], N, i;



    scanf("%d", &N);

    printf("Sum of ( ");

    for ( i=0; i<N; i++ ) {

        scanf("%d", &List[i]);

        if ( even(List[i])==0 )

            printf("%d ", List[i]);

    }

    printf(") = %d\n", OddSum(List, N));



    return 0;

}



/* ��Ĵ��뽫��Ƕ������ */

int even( int n )   //�ж���ż

{

    if(n%2==0)

    {

        return 1;

    }

    else

        return 0;

}

int OddSum( int List[], int N )

{

    if(N==0)

    {

        return 0;

    }

    int res=even(List[N-1])?0:List[N-1];

    res+=OddSum(List,N-1);//�ݹ�

    return res;

}