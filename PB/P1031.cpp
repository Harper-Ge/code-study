#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	int weight[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	bool flag = true;
	char check[]={'1','0','X','9','8','7','6','5','4','3','2'};
	cin>>n;
	while(n--){
		int sum=0;
		string s;
		cin>>s;
		for(i=0;i<17;i++){
			sum += weight[i]*(s[i]-'0');
		}
		if(s[17]!=check[sum%11]){
			flag=false;
			cout<<s<<endl;
		}
	}
	if(flag){
		cout<<"All passed";
	}
	
} 
