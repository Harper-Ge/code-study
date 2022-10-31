#include<iostream>
using namespace std;
typedef struct stu{
	char name[11];
	char id[11];
	int score;
}STU;
int main(){
	int n,i,min=0,max=0;
	cin>>n;
	STU list[n];
	for(i=0;i<n;i++){
		cin>>list[i].name>>list[i].id>>list[i].score;
	}
	for(i=1;i<n;i++){
		if(list[i].score>list[max].score) max=i;
		if(list[i].score<list[min].score) min=i;	
	}
	cout<<list[max].name<<" "<<list[max].id<<endl;
	cout<<list[min].name<<" "<<list[min].id<<endl;
	return 0;
} 
