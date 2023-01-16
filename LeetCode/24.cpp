class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* cur = dummy;
        while(cur->next && cur->next->next){
            ListNode* tmp1 = cur->next;
            ListNode* tmp2 = cur->next->next;

            cur->next = tmp2;
            tmp1->next = tmp2->next;
            tmp2->next=tmp1;
            cur=tmp1;
        }
        return dummy->next;
    }
};
