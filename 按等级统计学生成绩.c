/*����Ҫ��ʵ��һ������ѧ���ɼ�������ȼ�����ͳ�Ʋ����������ļ򵥺���*/

#include <stdio.h>

#define MAXN 10



struct student{

    int num;

    char name[20];

    int score;

    char grade;

};



int set_grade( struct student *p, int n );



int main()

{   struct student stu[MAXN], *ptr;

    int n, i, count;



    ptr = stu;

    scanf("%d\n", &n);

    for(i = 0; i < n; i++){

       scanf("%d%s%d", &stu[i].num, stu[i].name, &stu[i].score);

    } 

   count = set_grade(ptr, n);

   printf("The count for failed (<60): %d\n", count);

   printf("The grades:\n"); 

   for(i = 0; i < n; i++)

       printf("%d %s %c\n", stu[i].num, stu[i].name, stu[i].grade);

    return 0;

}



/* ��Ĵ��뽫��Ƕ������ */

int set_grade( struct student *p, int n )

{

    int i,res=0;

    for(i=0;i<n;i++)

    {

        if(p[i].score<60)  //���ɼ��ֵȼ�������res����������

        {

            p[i].grade='D';

            res++;

        }

        if(p[i].score>=85)

            p[i].grade='A';

        if(p[i].score<85&&p[i].score>=70)

            p[i].grade='B';

        if(p[i].score<70&&p[i].score>=60)

            p[i].grade='C';

    }

    return res;

}