#include <bits/stdc++.h>
using namespace std;
int main() {
	map<char,int> mp;
	string s;getline(cin,s);
	for(int i=0;i<s.size();i++) mp[s[i]]++;
	while(mp['P']>0||mp['A']>0||mp['T']>0||mp['e']>0||mp['s']>0||mp['t']>0){
		if(mp['P']-- >0) cout<<'P';
		if(mp['A']-- >0) cout<<'A';
		if(mp['T']-- >0) cout<<'T';
		if(mp['e']-- >0) cout<<'e';
		if(mp['s']-- >0) cout<<'s';
		if(mp['t']-- >0) cout<<'t'; 
	}
	return 0;
}

