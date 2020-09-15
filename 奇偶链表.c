
/*����һ�������������е������ڵ��ż���ڵ�ֱ�����һ����ע�⣬����������ڵ��ż���ڵ�ָ���ǽڵ��ŵ���ż�ԣ������ǽڵ��ֵ����ż�ԡ�



�볢��ʹ��ԭ���㷨��ɡ�����㷨�Ŀռ临�Ӷ�ӦΪ O(1)��ʱ�临�Ӷ�ӦΪ O(nodes)��nodes Ϊ�ڵ�������



ʾ�� 1:



����: 1->2->3->4->5->NULL

���: 1->3->5->2->4->NULL

*/

/**

 * Definition for singly-linked list.

 * struct ListNode {

 *     int val;

 *     struct ListNode *next;

 * };

 */





struct ListNode* oddEvenList(struct ListNode* head)

{

    if(!head||!head->next)

    {

        return head;

    }

    struct ListNode*phead=head,*qhead=head->next,*p=phead,*q=qhead;    //�����������ͷָ��

    while(q&&q->next)      //��ԭ����ֳ���ż��������

    {

        p->next=p->next->next;

        q->next=q->next->next;

        p=p->next;

        q=q->next;

    }

    p->next=qhead;  //����������ͷβ���

    return phead;

}