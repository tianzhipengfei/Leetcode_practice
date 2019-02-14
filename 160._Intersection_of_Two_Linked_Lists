class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
         if(!headA)
            return nullptr;
        if(!headB)
            return nullptr;

        ListNode *p,*q;
        p = headA;
        q = headB;
        int cntA = 0,cntB = 0;

        while(p){
            cntA++;
            p = p->next;
        }

        while(q){
            cntB++;
            q = q->next;
        }

        p = headA;
        q = headB;
        int i = abs(cntA-cntB);

        if(cntA > cntB){
            while(i--){
                p = p->next;
            }
        }
        else{
            while(i--){
                q = q->next;
            }
        }
        while(p){
            if(p == q){
                return p;
            }
            p = p->next;
            q = q->next;
        }

        return nullptr;
    }
};
