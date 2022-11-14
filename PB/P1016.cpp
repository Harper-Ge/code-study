#include<bits/stdc++.h> 
using namespace std;

int val(int a, int da){
	int sum=0;
	while(a){
		if(a%10==da){
			sum=sum*10+da;
		}
		a/=10;
	}
	return sum;
}
int main(){
	int da,db;
	int a,b;
	cin>>a>>da>>b>>db;
	cout<<val(a,da)+val(b,db);
	return 0;
}
