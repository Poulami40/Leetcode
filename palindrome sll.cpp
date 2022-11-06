/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *ptr=head,*temp=middlenode(head),*rev=reverse(temp);
        if (head==NULL)
            return true;
        while(rev!=NULL)
        {
            if(ptr->val!=rev->val)
                return false;
            ptr=ptr->next;
            rev=rev->next;
        }
        return true;
    }
    ListNode* middlenode(ListNode* head)
    {
        ListNode* slow=head,*fast=head;
        while(fast&&fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* reverse(ListNode* ptr)
    {
        ListNode* curr=ptr,*prev=NULL,*temp;
        while(curr!=NULL)
        {
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
};
