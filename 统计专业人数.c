/*本题要求实现一个函数，统计学生学号链表中专业为计算机的学生人数。*/

#include <stdio.h>

#include <stdlib.h>

#include <string.h>



struct ListNode {

    char code[8];

    struct ListNode *next;

};



struct ListNode *createlist(); /*裁判实现，细节不表*/

int countcs( struct ListNode *head );



int main()

{

    struct ListNode  *head;



    head = createlist();

    printf("%d\n", countcs(head));

	

    return 0;

}



/* 你的代码将被嵌在这里 */

int countcs( struct ListNode *head )

{

    if(!head)       //判空

    {

        return 0;    

    }

    struct ListNode*p=head;

    int count=0;

    while(p)   //遍历     一一查找

    {

        if(p->code[1]=='0'&&p->code[2]=='2')

        {

            count++;

        }

        p=p->next;

    }

    return count;

}