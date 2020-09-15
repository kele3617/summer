
/*定义一个函数，输入一个链表的头节点，反转该链表并输出反转后链表的头节点。



 



示例:



输入: 1->2->3->4->5->NULL

输出: 5->4->3->2->1->NULL

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

    while(p)    //反转链表

    {

        pre=p;        //对旧链表做头删

        p=p->next;

        pre->next=new;   //对新链表做头插

        new=pre;

    }

    return new;

}