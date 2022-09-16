/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


int getDecimalValue(struct ListNode* head){
    struct ListNode *temp=head;
    int sum=0;
   
    while(temp)
    {
        sum=(temp->val)+2*sum;
        temp=temp->next;
    }
    return sum;
}
