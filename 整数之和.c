/*��ʹ������� + �� - ������������ a ��b ֮�͡�

ʾ�� 1:

����: a = 1, b = 2

���: 3

ʾ�� 2:

����: a = -2, b = 3

���: 1
*/

#include<stdio.h>

int getSum(int a, int b)

{

    while(b)

    {

        int c = (unsigned int)(a&b)<<1;

        a = a^b;

        b = c;

    }

    return a;

}

int main()

{

	int a,b;

	scanf("%d %d",&a,&b);



	printf("%d",getSum(a,b));



	return 0;

}