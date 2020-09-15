
/**

 * Definition for singly-linked list.

 * struct ListNode {

 *     int val;

 *     struct ListNode *next;

 * };

 */





struct ListNode* insertionSortList(struct ListNode* head)

{

    if( head == NULL || head->next == NULL)

         return  head;

    struct ListNode* L = (struct ListNode*)malloc(sizeof(struct ListNode));

    L->next = head;

    struct ListNode*  pre=head;//排好序的最后一个元素

    struct ListNode*  cur=head->next;//需要排序的当前元素

    while(cur)

    {

        if(cur->val < pre->val)

        {

            struct ListNode* tmp  = L;

            while(tmp->next->val < cur->val)

            {

                tmp = tmp->next;

            }

            pre->next = cur->next;

            cur->next = tmp->next;

            tmp->next = cur;

            cur = pre->next; 

        }

        else

        {

            pre = pre->next;

            cur = cur->next;

        }

    }

    return L->next;

}