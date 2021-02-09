ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum=0;
        int carry=0;
        int res=0;
        ListNode* p1=l1;
        ListNode* p2=l2;
        int x,y;
        ListNode* h=new ListNode(0);
        ListNode* d=h;
        while(p1!=NULL || p2!=NULL){
            if(p1!=NULL)x=p1->val;
            else x=0;
            if(p2!=NULL) y=p2->val;
            else y=0;
            sum=x+y+carry;
            carry=sum/10;
            res=sum%10;
            d->next= new ListNode(res);
            d=d->next;
            if(p1!=NULL) p1=p1->next;
            if(p2!=NULL) p2=p2->next;
        }
        if(carry>0){
            d->next= new ListNode(carry);
        }
        
        return h->next;
        
    }
