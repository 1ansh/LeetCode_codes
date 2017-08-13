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
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode* result = new ListNode(0);
        ListNode* head = result;
        int sum,carry=0;
        while(l1!=NULL && l2!=NULL)
        {
            sum = l1->val + l2->val + carry;
            carry = sum/10;
            sum = sum%10;
            result->next = new ListNode(sum);
            l1= l1->next;
            l2= l2->next;
            result = result->next;
        }
        while(l1!=NULL)
        {
            result->next=new ListNode((l1->val+carry)%10);
            carry = (l1->val+carry)/10;
            l1=l1->next;
            result=result->next;
        }
        while(l2!=NULL)
        {
            result->next=new ListNode((l2->val+carry)%10);
            carry = (l2->val+carry)/10;
            l2=l2->next;
            result=result->next;
        }
        if(carry!=0)
        {
            result->next = new ListNode(carry);
        }
        return head->next;
    }
};
