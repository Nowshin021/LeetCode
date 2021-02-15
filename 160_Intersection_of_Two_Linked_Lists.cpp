 ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL){
                return NULL;
        }
        ListNode *aPointer=headA;
        ListNode *bPointer=headB;
        while(aPointer != bPointer){
            if(aPointer ==NULL){
                aPointer=headB;
            }else{
                aPointer =aPointer->next;
            }
            if(bPointer==NULL){
                bPointer=headA;
            }else{
                bPointer =bPointer->next;
            }
        }
        return aPointer;
    }
