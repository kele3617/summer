/**

 * Note: The returned array must be malloced, assume caller calls free().

 */

int* constructArr(int* a, int aSize, int* returnSize)

{

    int *p,i,j;

    p=(int *)malloc(sizeof(int)*aSize);

    if (a == NULL || aSize <= 1) //���ǵ�ԭ����Ϊ�յ����

    {

        *returnSize = 0;

        return a;

    }

    for(i=0;i<aSize;i++)

    {

        p[i]=1;      //��p����ÿ��Ԫ�ظ���ʼֵ

        for(j=0;j<aSize;j++)

        {

            if(j!=i)     //�������⣬�����������Ԫ���۳�

            p[i]*=a[j];

        }

    }

    *returnSize=aSize;

    return p;

}