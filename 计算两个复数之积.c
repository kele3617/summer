
/*����Ҫ��ʵ��һ�����㸴��֮���ļ򵥺�����*/

#include <stdio.h>



struct complex{     //���帴��ʵ�����鲿�Ľṹ��

    int real;

    int imag;

};



struct complex multiply(struct complex x, struct complex y);



int main()

{

    struct complex product, x, y;



    scanf("%d%d%d%d", &x.real, &x.imag, &y.real, &y.imag);

    product = multiply(x, y);

    printf("(%d+%di) * (%d+%di) = %d + %di\n", 

            x.real, x.imag, y.real, y.imag, product.real, product.imag);



    return 0;

}



/* ��Ĵ��뽫��Ƕ������ */

struct complex multiply(struct complex x, struct complex y)

{

    struct complex p;

    p.real=x.real*y.real-x.imag*y.imag;     //��ʽ����

    p.imag=x.real*y.imag+y.real*x.imag;   //ͬ��

    return p;

}