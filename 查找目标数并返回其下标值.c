/**

 * Note: The returned array must be malloced, assume caller calls free().

 */

int* twoSum(int* numbers, int numbersSize, int target, int* returnSize)

{

    int *p=(int *)malloc(sizeof(int)*2);

    int i,j;

    i=0,j=numbersSize-1;    //����˫ָ�룬�ֱ�ָ�������ͷ��β

    while(numbers[i]+numbers[j]!=target)

    {

        if(numbers[i]+numbers[j]>target)  //������֮�ʹ���Ŀ������������ָ����ǰ��һλ����֮ͬ��

        {

            j--;

        }

        else

        {

            i++;

        }

    }

    *returnSize=2;

    p[0]=i+1;

    p[1]=j+1;

    return p;

}