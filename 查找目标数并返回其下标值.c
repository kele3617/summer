/**

 * Note: The returned array must be malloced, assume caller calls free().

 */

int* twoSum(int* numbers, int numbersSize, int target, int* returnSize)

{

    int *p=(int *)malloc(sizeof(int)*2);

    int i,j;

    i=0,j=numbersSize-1;    //定义双指针，分别指向数组的头和尾

    while(numbers[i]+numbers[j]!=target)

    {

        if(numbers[i]+numbers[j]>target)  //当两数之和大于目标数，则后面的指针往前移一位，反之同理

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