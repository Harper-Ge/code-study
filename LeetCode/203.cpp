class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* p = new ListNode(0);
        p->next=head;
        ListNode* cur=p;
        while(cur->next){
            ListNode* q=cur->next;
            if(q->val==val) {
                cur->next=q->next;
                delete q;
            }else {
                cur = cur->next;
            }
        }
        return p->next;
        delete p;
    }
};
