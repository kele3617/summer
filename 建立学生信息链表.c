/*����Ҫ��ʵ��һ���������ѧ���ɼ���֯�ɵ�������ļ򵥺�����*/

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

/* ��Ĵ��뽫��Ƕ������ */

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

        if(!head)        //ͷ�巨��������

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