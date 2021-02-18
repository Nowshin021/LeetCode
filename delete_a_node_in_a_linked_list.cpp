void deleteNode(ListNode* node) {
        ListNode* temp= new ListNode();
        if(node->next==NULL){
            node==NULL;
        }
        node->val=(node->next)->val;
        node->next=(node->next)->next;
        
    }
