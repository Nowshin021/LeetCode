//create a dummy node and point that dummy node's next to head



ListNode* removeElements(ListNode* head, int val) {
        if(!head){ return NULL; }
        if(head->next == NULL && head->val == val){ return NULL; }
        ListNode* privious = new ListNode(0);
        privious->next = head;
        ListNode*temp = privious;
        while(temp){
            if(temp->next && temp->next->val == val){
                temp->next = temp->next->next;
            }
            else{
                temp = temp->next;
            }
        }
        return privious->next;
    }

//recursive 
ListNode* removeElements(ListNode* head, int val) {
        //recursive 
        if(head==NULL){return NULL;}
        if(head->next==NULL && head->val==val){return NULL;}
        if(head->val==val){
            return removeElements(head->next, val);
            
        }
        head->next =removeElements(head->next, val);
        return head;
    }   
