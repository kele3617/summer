/*

һ������Ϊn-1�ĵ������������е��������ֶ���Ψһ�ģ�����ÿ�����ֶ��ڷ�Χ0��n-1֮�ڡ��ڷ�Χ0��n-1�ڵ�n������������ֻ��һ�����ֲ��ڸ������У����ҳ�������֡�

ʾ�� 1:



����: [0,1,3]

���: 2

ʾ�� 2:



����: [0,1,2,3,4,5,6,7,9]

���: 8

*/

int missingNumber(int* nums, int numsSize)

{

    int a[numsSize+1],i,flag;

    flag=0;

    for(i=0;i<numsSize+1;i++)   //������nums��ԭ��a��

    {

        a[i]=i;

    }

    for(i=0;i<numsSize;i++)   //Ȼ����һ�Ƚ�

    {

        if(nums[i]!=a[i])   //�������ȣ�˵���ҵ�ȷʵ�������ˣ���flag=1���˳�ѭ��

        {

            flag=1;

            return a[i];

            break;

        }

    }

    if(!flag)//���flag��������˵��û�ҵ����򷵻�����a�����һ��Ԫ��

    {

        return a[numsSize];

    }

    return 0;

}