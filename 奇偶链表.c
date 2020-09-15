
/*给定一个单链表，把所有的奇数节点和偶数节点分别排在一起。请注意，这里的奇数节点和偶数节点指的是节点编号的奇偶性，而不是节点的值的奇偶性。



请尝试使用原地算法完成。你的算法的空间复杂度应为 O(1)，时间复杂度应为 O(nodes)，nodes 为节点总数。



示例 1:



输入: 1->2->3->4->5->NULL

输出: 1->3->5->2->4->NULL

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

    struct ListNode*phead=head,*qhead=head->next,*p=phead,*q=qhead;    //记下两个表的头指针

    while(q&&q->next)      //把原链表分成奇偶两个链表

    {

        p->next=p->next->next;

        q->next=q->next->next;

        p=p->next;

        q=q->next;

    }

    p->next=qhead;  //把两个链表头尾相接

    return phead;

}