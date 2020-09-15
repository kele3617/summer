/*

给出两个 非空 的链表用来表示两个非负的整数。其中，它们各自的位数是按照 逆序 的方式存储的，并且它们的每个节点只能存储 一位 数字。

如果，我们将这两个数相加起来，则会返回一个新的链表来表示它们的和。

您可以假设除了数字 0 之外，这两个数都不会以 0 开头。

示例：

输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)

输出：7 -> 0 -> 8

原因：342 + 465 = 807

*/

/**

 * Definition for singly-linked list.

 * struct ListNode {

 *     int val;

 *     struct ListNode *next;

 * };

 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)

{

    struct ListNode *p=NULL,*tail;

    int res,res1=0,res2=0,i;

    i=0;

    while(l1)       //思路是先把两个链表表示的数分别存放到res1和res2中，然后相加，存放到res中

    {

        res1+=l1->val*pow(10,i);

        l1=l1->next;

        i++;

    }

    i=0;

    while(l2)

    {

        res2+=l2->val*pow(10,i);

        l2=l2->next;

        i++;

    }

    res=res1+res2;   //两数相加

    if(!res)       //判断是否为0

    {

        struct ListNode*q=(struct ListNode*)malloc(sizeof(struct ListNode));

        q->next=NULL;

        q->val=res;

        p=q;

    }

    while(res)   //当res非0时进入循环

    {

        struct ListNode*q=(struct ListNode*)malloc(sizeof(struct ListNode));

        q->next=NULL;

        q->val=res%10;   //让res对10取余

        res=res/10;      //再让res除以10

        if(!p)       //尾插法形成链表

        {

            p=q;

        }

        else{

            tail->next=q;

        }

        tail=q;

    }

    return p;

}