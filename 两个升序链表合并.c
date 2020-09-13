/*��������������ϲ�Ϊһ���µ� ���� �������ء���������ͨ��ƴ�Ӹ�����������������нڵ���ɵġ� 

ʾ����



���룺1->2->4, 1->3->4

�����1->1->2->3->4->4

*/

/**

 * Definition for singly-linked list.

 * struct ListNode {

 *     int val;

 *     struct ListNode *next;

 * };

 */

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)

{

    if(!l1)   //�ж��Ƿ�Ϊ��

    {

        return l2;

    }

    if(!l2)

    {

        return l1;

    }

    if(l1->val<l2->val)  //�ݹ�

    {

        l1->next=mergeTwoLists(l1->next,l2);

        return l1;

    }

    else

    {

        l2->next=mergeTwoLists(l1,l2->next);

        return l2;

    }

}