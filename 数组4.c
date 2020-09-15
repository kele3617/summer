/*假设按照升序排序的数组在预先未知的某个点上进行了旋转。



( 例如，数组 [0,1,2,4,5,6,7] 可能变为 [4,5,6,7,0,1,2] )。



搜索一个给定的目标值，如果数组中存在这个目标值，则返回它的索引，否则返回 -1 。



你可以假设数组中不存在重复的元素。



你的算法时间复杂度必须是 O(log n) 级别。*/

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

