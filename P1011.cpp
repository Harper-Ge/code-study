#include<iostream>
using namespace std;
int main(){
	int t,i=1;
	long long a,b,c;
	cin>>t;
	for(i=1;i<=t;i++){
		cin>>a>>b>>c;
		if(a+b>c){
			cout<<"Case #"<<i<<": true";
		}else{
			cout<<"Case #"<<i<<": false";
		}
		if(i!=t){
			cout<<endl;
		}
	}
	return 0;
} 
