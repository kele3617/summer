
/*本题要求实现一个计算复数之积的简单函数。*/

#include <stdio.h>



struct complex{     //定义复数实部与虚部的结构体

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



/* 你的代码将被嵌在这里 */

struct complex multiply(struct complex x, struct complex y)

{

    struct complex p;

    p.real=x.real*y.real-x.imag*y.imag;     //公式计算

    p.imag=x.real*y.imag+y.real*x.imag;   //同上

    return p;

}