#include<bits/stdc++.h>
using namespace std;

typedef struct ListNode{
	int val;
	struct ListNode* next;
}ListNode; 

void CreateList(ListNode*& L, int arr[], int n) {
	ListNode* s, * rear;
	L = (ListNode*)malloc(sizeof(struct ListNode));	
	rear = L;									
	for (int i = 0; i < n; i++) {			
		s = (ListNode*)malloc(sizeof(ListNode));
		s->val = arr[i];					
		rear->next = s;						
		rear = s;
	}
	rear->next = NULL;						
}
void printList(ListNode* L){
	ListNode* p=L;
	while(p!=NULL){
		cout<<p->val<<" ";
		p=p->next;
	}
	cout<<endl;
}
ListNode* reverse(ListNode* head) {
	ListNode* pre = NULL;				
	ListNode* curr = head;			
	while (curr != NULL) {
		ListNode* next = curr->next;		
		curr->next = pre;						
		pre = curr;							
		curr = next;						
	}
	return pre;	
}
ListNode* reverseGroup(ListNode* head, int k, int n) {
	int cnt=n/k, move=n%k,i;
	ListNode* dummy = (ListNode*)malloc(sizeof(ListNode));
	dummy->next=head;
	ListNode* pre = dummy;			
	ListNode* aft = dummy;				

	for(i=0;i<move;i++){
		pre=pre->next;
		aft=aft->next;
	}
	while (aft->next != NULL) {
		for (int i = 0; i < k && aft != NULL; i++) {
			aft = aft->next;					
		}
		ListNode* start = pre->next;		
		ListNode* next = aft->next;		
		aft->next = NULL;						
		pre->next = reverse(start);				
		
		start->next = next;					
		pre = start;						
		aft = start;						
	}
	return dummy->next;
}
int main(){
	ListNode* L=(ListNode*)malloc(sizeof(ListNode));
	int n,k;
	cout<<"输入链表结点个数：\n";
	cin>>n;
	int arr[n];
	cout<<"输入链表结点元素值：\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	CreateList(L,arr,n);
	cout<<"输入k值：\n";
	cin>>k;
	ListNode* reverseL = reverseGroup(L->next, k,n);
	cout<<"输出链表结点元素值：\n";
	printList(reverseL);
	return 0;
}
