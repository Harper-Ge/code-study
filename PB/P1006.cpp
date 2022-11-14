#include<iostream>
using namespace std;

int main(){
	int b=0,s=0,n=0;
	int num;
	cin>>num;
	b=num/100;
	s=num/10%10;
	n=num%100%10;
	for(b;b>0;b--){
		cout<<"B";
	}
	for(s;s>0;s--){
		cout<<"S";
	}
	for(int i=1;i<n+1;i++){
		cout<<i;
	}
	return 0;
} 
