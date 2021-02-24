    bool isPalindrome(ListNode* head) {
        if(head==NULL){
            return true;
        }
        if(head->next==NULL){
            return true;
        }
        stack<int> s;
        
        ListNode* p=head;
        while(p!=NULL){
            s.push(p->val);
            p=p->next;
            
            
        }
        
        
        
        while( head!=NULL ){
           
            if(head->val!=s.top()){
                return false;
            }   
            else{
                head=head->next;
                s.pop();
            }
           
            
        }
        
        
        return true;
        
        
    }
