
/**

 * Note: The returned array must be malloced, assume caller calls free().

 */

int* shuffle(int* nums, int numsSize, int n, int* returnSize)

{

    int *a,i,j;   //������Ҫ���ص�ָ��

    a=(int *)malloc(sizeof(int)*numsSize);

    j=0;

    *returnSize=numsSize;

    for(i=0;i<n;i++)//������ص���ǰ�������ֵ�Ԫ�ؽ������У�����ֻ��ѭ��һ��Ϳ���

    {

        a[j]=nums[i];//��a[j]=nums[i],��������Ԫ��ֻ���nums�еģ�i+n����Ԫ����ȼ���

        a[j+1]=nums[i+n];

        j=j+2;

    }

    return a;

}