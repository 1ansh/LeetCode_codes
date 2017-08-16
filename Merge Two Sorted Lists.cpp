/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
    {
        ListNode* result = new ListNode(0);
        ListNode* head = result;
        while(l1!=NULL && l2!=NULL)
        {
            if(l1->val<=l2->val)
            {
                result->next = new ListNode(l1->val);
                l1 = l1->next;
                result = result->next;
            }
            else
            {
                result->next = new ListNode(l2->val);
                l2 = l2->next;
                result = result->next;
            }
        }
        while(l1!=NULL)
        {
            result->next = new ListNode(l1->val);
            l1 = l1->next;
            result = result->next;
        }
        while(l2!=NULL)
        {
            result->next = new ListNode(l2->val);
            l2 = l2->next;
            result = result->next;
        }
        return head->next;
    }
};
