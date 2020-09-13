/*本题要求实现一个将输入的学生成绩组织成单向链表的简单函数。*/

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

struct stud_node {

     int    num;

     char   name[20];

     int    score;

     struct stud_node *next;

};

struct stud_node *head, *tail;

void input();

int main()

{

    struct stud_node *p;

    head = tail = NULL;

    input();

    for ( p = head; p != NULL; p = p->next )

        printf("%d %s %d\n", p->num, p->name, p->score);

    return 0;

}

/* 你的代码将被嵌在这里 */

void input()

{

    int num;

    char name[20];

    int  score;

    scanf("%d%s%d",&num,name,&score);

    while(num)

    {

        struct stud_node*pre=(struct stud_node*)malloc(sizeof(struct stud_node));

        pre->next=NULL;

        pre->num=num;

        pre->score=score;

        strcpy(pre->name,name);

        if(!head)        //头插法建立链表

        {

            head=pre;

        }

        else{

            tail->next=pre;

        }

        tail=pre;

        scanf("%d%s%d",&num,name,&score);

    }

}