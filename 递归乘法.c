
/*������ 08.05. �ݹ�˷�

�ݹ�˷��� дһ���ݹ麯������ʹ�� * ������� ʵ����������������ˡ�����ʹ�üӺš����š�λ�ƣ���Ҫ����һЩ��



ʾ��1:



 ���룺A = 1, B = 10

 �����10

ʾ��2:



 ���룺A = 3, B = 4

 �����12*/

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