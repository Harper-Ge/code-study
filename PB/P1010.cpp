#include<iostream>
using namespace std;
int main(){
	int a,b,cnt=0;
	while(cin>>a>>b){
		if(b){
			if(!cnt){
				cout<<a*b<<" "<<b-1;
				cnt++;
			}else{
				cout<<" "<<a*b<<" "<<b-1;
			}
		}
	}
    if (cnt == 0) cout << "0 0";
	return 0;
} 
