/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* middleNode(struct ListNode* head){
    struct ListNode* temp=head,*ptr=NULL;
    int c=1,d=1;
    while(temp->next!=NULL)
    {
        c++;
        temp=temp->next;
    }
    temp=head;
    while(d!=((c/2)+1))
    {
        temp=temp->next;
        d++;
    }
    return temp;
        
}
