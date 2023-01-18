class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* curA = headA;
        ListNode* curB = headB;
        int lenA=0, lenB=0;
        while(curA){
            lenA++;
            curA=curA->next;
        }
         while(curB){
            lenB++;
            curB=curB->next;
        }       
        curA = headA;
        curB = headB;
        if(lenA>lenB){
            int n=lenA-lenB;
            while(n--){
                curA=curA->next;
            }
        }else{
            int n = lenB-lenA;
            while(n--){
                curB=curB->next;
            }
        }
        while(curA){
            if(curA == curB){
                return curA;
            }
            curA = curA->next;
            curB = curB->next;
        }
        return NULL;
};
};
