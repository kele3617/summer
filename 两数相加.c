/*

�������� �ǿ� ������������ʾ�����Ǹ������������У����Ǹ��Ե�λ���ǰ��� ���� �ķ�ʽ�洢�ģ��������ǵ�ÿ���ڵ�ֻ�ܴ洢 һλ ���֡�

��������ǽ��������������������᷵��һ���µ���������ʾ���ǵĺ͡�

�����Լ���������� 0 ֮�⣬���������������� 0 ��ͷ��

ʾ����

���룺(2 -> 4 -> 3) + (5 -> 6 -> 4)

�����7 -> 0 -> 8

ԭ��342 + 465 = 807

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

    while(l1)       //˼·���Ȱ����������ʾ�����ֱ��ŵ�res1��res2�У�Ȼ����ӣ���ŵ�res��

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

    res=res1+res2;   //�������

    if(!res)       //�ж��Ƿ�Ϊ0

    {

        struct ListNode*q=(struct ListNode*)malloc(sizeof(struct ListNode));

        q->next=NULL;

        q->val=res;

        p=q;

    }

    while(res)   //��res��0ʱ����ѭ��

    {

        struct ListNode*q=(struct ListNode*)malloc(sizeof(struct ListNode));

        q->next=NULL;

        q->val=res%10;   //��res��10ȡ��

        res=res/10;      //����res����10

        if(!p)       //β�巨�γ�����

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