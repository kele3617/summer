
/**

 * Note: The returned array must be malloced, assume caller calls free().

 */

int* shuffle(int* nums, int numsSize, int n, int* returnSize)

{

    int *a,i,j;   //定义需要返回的指针

    a=(int *)malloc(sizeof(int)*numsSize);

    j=0;

    *returnSize=numsSize;

    for(i=0;i<n;i++)//重组的特点是前后两部分的元素交叉排列，所以只需循环一半就可以

    {

        a[j]=nums[i];//让a[j]=nums[i],则其后面的元素只需和nums中的（i+n）个元素相等即可

        a[j+1]=nums[i+n];

        j=j+2;

    }

    return a;

}