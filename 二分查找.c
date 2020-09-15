/* ���ֲ���

����һ�� n ��Ԫ������ģ������������� nums ��һ��Ŀ��ֵ target  ��дһ���������� nums �е� target�����Ŀ��ֵ���ڷ����±꣬���򷵻� -1��

ʾ�� 1

����: nums = [-1,0,3,5,9,12], target = 9

���: 4

����: 9 ������ nums �в����±�Ϊ 4

ʾ�� 2:

����: nums = [-1,0,3,5,9,12], target = 2

���: -1

����: 2 ������ nums ����˷��� -1*/

int search(int* nums, int numsSize, int target)

{

    int left = 0,right = numsSize-1,mid;

    while(left<=right)

    {

        mid = (left + right)/2;

        if(nums[mid] == target)

        {

            return mid;

        } 

        else if(nums[mid] > target)

        {

            right = mid-1;

        }

        else

        {

            left = mid+1;

        }

    }

    return -1;

}

int main()

{

	int n,a[100],target;

	scanf("%d %d",&n,&target);

	for(int i = 0;i < n;i++)

	{

		scanf("%d",&a[i]);

	}

	printf("%d ",search(a,n,target));

}