#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2;
	int pos[300];
	cin>>s1>>s2;
	for(int i=0;i<s2.length();i++){
		if(s2[i]<='z'&&s2[i]>='a'){
			s2[i]+='A'-'a';
		}
		pos[s2[i]]=1;	
	}
	for(int i=0;i<s1.length();i++){
		if(s1[i]<='z'&&s1[i]>='a'){
			s1[i]+='A'-'a';
		}
		if(pos[s1[i]]!=1){
			cout<<s1[i];
			pos[s1[i]]=1;
		}
	}
	return 0;
}
