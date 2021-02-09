 ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
         ListNode* p=head->next;
         ListNode* newhead=head;
         newhead->next=NULL;
        while(p!=NULL){
            ListNode* temp=p;
            p=p->next;
            temp->next=newhead;
            newhead=temp;
            
        }
        return newhead;
        
        
        
        
    }
