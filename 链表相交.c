/*�������������������ж������Ƿ��ཻ�����ؽ��㡣��ע���ཻ�Ķ�����ڽڵ�����ã������ǻ��ڽڵ��ֵ�����仰˵�����һ������ĵ�k���ڵ�����һ������ĵ�j���ڵ���ͬһ�ڵ㣨������ȫ��ͬ�����������������ཻ��





ʾ�� 1��



���룺intersectVal = 8, listA = [4,1,8,4,5], listB = [5,0,1,8,4,5], skipA = 2, skipB = 3

�����Reference of the node with value = 8

������ͣ��ཻ�ڵ��ֵΪ 8 ��ע�⣬��������б��ཻ����Ϊ 0�����Ӹ��Եı�ͷ��ʼ�������� A Ϊ [4,1,8,4,5]������ B Ϊ [5,0,1,8,4,5]���� A �У��ཻ�ڵ�ǰ�� 2 ���ڵ㣻�� B �У��ཻ�ڵ�ǰ�� 3 ���ڵ㡣

*/

/**

 * Definition for singly-linked list.

 * struct ListNode {

 *     int val;

 *     struct ListNode *next;

 * };

 */

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) 

{

    struct ListNode *p,*q;

    p=headA;

    while(p!=NULL)   //�����ⷨ������˫ѭ����һѰ��

    {

        q=headB;

        while(q!=NULL)

        {

            if(p==q)

            {

                return p;

            }

            q=q->next;

        }

        p=p->next;

    }

    return NULL;

}