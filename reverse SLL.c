struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *curr=head,*next=NULL,*prev=NULL;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    return head;
}
