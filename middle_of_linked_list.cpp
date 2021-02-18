 ListNode* middleNode(ListNode* head) {
        int c=0;
        ListNode* p=head;
       
        while(p!=NULL){
            c=c+1;
            p=p->next;
            
        }
        int mid=c/2;
            p=head;
        for(int i=0;i<mid;i++){
            p=p->next;
            
        }
        cout<<p->val<<endl;
        return p;
        
        
    }
