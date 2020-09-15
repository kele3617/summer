/*���谴�����������������Ԥ��δ֪��ĳ�����Ͻ�������ת��



( ���磬���� [0,1,2,4,5,6,7] ���ܱ�Ϊ [4,5,6,7,0,1,2] )��



����һ��������Ŀ��ֵ����������д������Ŀ��ֵ���򷵻��������������򷵻� -1 ��



����Լ��������в������ظ���Ԫ�ء�



����㷨ʱ�临�Ӷȱ����� O(log n) ����*/

#include<stdio.h>

int search(int* nums, int numsSize, int target){

    if (numsSize == 0) {

        return -1;

    }

    int head = 0;

    int tail = numsSize - 1;

    int mid;

    while (head < tail) {

        mid = (head + tail) / 2;

        if (nums[head] == target) {

            return head;

        } else if (nums[tail] == target) {

            return tail;

        } 

        if (head == mid) {

            break;

        }

        if (nums[head] < nums[mid]) {

            if (nums[head] < target && nums[mid] > target) {  

                tail = mid; 

            } else {                                 

                head = mid;

            }

        } else {                                              

            if (nums[mid] < target && nums[tail] > target) {  

                head = mid;

            } else {

                tail = mid;                                   

            }

        }

    }

    if (nums[head] == target) {

        return head;

    } else if (nums[tail] == target) {

        return tail;

    }

    return -1;

}

int main()

{

	int n,target,a[100];

	scanf("%d %d",&n,&target);

    for(int i = 0;i < n;i++)

	{

		scanf("%d",&a[i]);

	}

	printf("%d ",search(a,n,target));

    

	return 0;

}

