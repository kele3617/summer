/**

 * Note: The returned array must be malloced, assume caller calls free().

 */

int* constructArr(int* a, int aSize, int* returnSize)

{

    int *p,i,j;

    p=(int *)malloc(sizeof(int)*aSize);

    if (a == NULL || aSize <= 1) //考虑到原数组为空的情况

    {

        *returnSize = 0;

        return a;

    }

    for(i=0;i<aSize;i++)

    {

        p[i]=1;      //对p数组每个元素赋初始值

        for(j=0;j<aSize;j++)

        {

            if(j!=i)     //除本身外，数组里的其他元素累乘

            p[i]*=a[j];

        }

    }

    *returnSize=aSize;

    return p;

}