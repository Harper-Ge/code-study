#include<bits/stdc++.h>
using namespace std;
typedef struct node{
	int data;
	node *left;
	node *right;
}Node, *Tree;
void createTree(Tree &T){
	int val;
	cin>>val;
	if(val==0){
		T=NULL;
	}else{
		T=new Node;
		T->data=val;
		createTree(T->left);
		createTree(T->right);
	}
}
int leftSum(Tree &root){
	if(root==NULL) return 0;
	int sum=0;
	if(root->left!=NULL&&root->left->left==NULL&&root->left->right==NULL){
		sum+=root->left->data;
	}
	return sum+leftSum(root->left)+leftSum(root->right);
}
int main(){
	Tree T;
	cout<<"请先序输入二叉树结点：\n";
	createTree(T);
	int sum=leftSum(T);
	cout<<"左叶子之和为："<<sum<<endl;
}
