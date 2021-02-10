 bool hasCycle(ListNode *head) {
        if(head==NULL){
            return 0;
        }
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast){
                return 1;
                
            }
            
        }
        
        return 0;
        
        
    }
