#include<iostream>
 using namespace std;
 int main(){
 	int n,i,row=0;
 	char tag;
 	cin>>n>>tag;
 	for(i=0;i<n;i++){
 		if((2*i*(i+2)+1)>n){
 			row=i-1;
 			break;
		}
	}
	for(i=row;i>0;i--){
		for(int k=0;k<row-i;k++) cout<<" ";
		for(int k=0;k<2*i+1;k++) cout<<tag;
		cout<<endl;
	}
	for(i=0;i<row;i++) cout<<" ";
	cout<<tag<<endl;
	for(i=1;i<=row;i++){
		for(int k=0;k<row-i;k++) cout<<" ";
		for(int k=0;k<2*i+1;k++) cout<<tag;
		cout<<endl;
	}
	cout<<n-(2*row*(row+2)+1);
	return 0;
 }
