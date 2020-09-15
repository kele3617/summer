#include<stdio.h>

#define N 5

void quicksort(int *nums, int left, int right)

{

    int i, j, tmp, base;

    if(left > right)

        return;

    

    i = left;

    j = right;

    base = nums[right];



    while(i != j) {

        while(nums[i] <= base && i < j) {

            i++;

        }



        while(nums[j] >= base && i < j) {

            j--;

        }



        if(i < j) {

            tmp = nums[i];

            nums[i] = nums[j];

            nums[j] = tmp;

        }

    }

    

    nums[right] = nums[i];

    nums[i] = base;



    quicksort(nums, left, i-1);

    quicksort(nums, i+1, right);

}

int main()

{

    int nums[N];

    for(int i=0;i<N;i++)

    {

        scanf("%d",&nums[i]);

    }

    quicksort(nums,0,N-1);

    for(int i=0;i<N;i++)

    {

        printf("%4d",nums[i]);

    }

}