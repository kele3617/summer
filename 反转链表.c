
/*����һ������������һ�������ͷ�ڵ㣬��ת�����������ת�������ͷ�ڵ㡣



 



ʾ��:



����: 1->2->3->4->5->NULL

���: 5->4->3->2->1->NULL

*/

/**

 * Definition for singly-linked list.

 * struct ListNode {

 *     int val;

 *     struct ListNode *next;

 * };

 */





struct ListNode* reverseList(struct ListNode* head)

{

    if(!head)

    {

        return NULL;

    }

    struct ListNode*p=head,*new=NULL;

    struct ListNode*pre;

    while(p)    //��ת����

    {

        pre=p;        //�Ծ�������ͷɾ

        p=p->next;

        pre->next=new;   //����������ͷ��

        new=pre;

    }

    return new;

}