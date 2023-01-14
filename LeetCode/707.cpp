class MyLinkedList {
public:
    
    struct LinkedList{
        int val;
        LinkedList* next;
        LinkedList(int x): val(x), next(nullptr){}
    };

    MyLinkedList() {
        dummy = new LinkedList(0);
        size = 0;
    }
    
    int get(int index) {
        if(index < 0 || index > size-1){
            return -1;
        }
        LinkedList* cur = dummy->next;
        while(index--){
            cur=cur->next;
        }
        return cur->val;
    }
    
    void addAtHead(int val) {
        LinkedList* tmp = new LinkedList(val);
        tmp->next=dummy->next;
        dummy->next=tmp;     
        size++;                
    }
    
    void addAtTail(int val) {
        LinkedList* newNode=new LinkedList(val);
        LinkedList* cur = dummy;
        while(cur->next){
            cur=cur->next;
        }
        cur->next=newNode;
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index<=0){
            addAtHead(val);
        }else if(index==size){
            addAtTail(val);
        }else if(index>size){
            return;
        }else{
            LinkedList* cur=dummy;
            LinkedList* newNode = new LinkedList(val);
            while(index--){
                cur=cur->next;
            }
            newNode->next=cur->next;
            cur->next=newNode;
            size++;
        }
    }
    
    void deleteAtIndex(int index) {
        if(index<0||index>size-1) return;
        LinkedList* cur=dummy;
        while(index--){
            cur=cur->next;
        }
        size--;
        LinkedList* tmp=cur->next;
        cur->next=tmp->next;
        delete tmp;
    }
    private:
        int size; 
        LinkedList* dummy;
};

