#include<iostream>
#include<cstring>
#include <map>
using namespace std;

int main(){
	int n,ppos=0,tpos=0;
	cin>>n;
	while(n--){
		char str[101];
		map<char,int> map;//int类型默认值为0 
		cin>>str;
		int len = strlen(str);
		int a,b,c;
		for(int i=0;i<len;i++){
			map[str[i]]++;
			if(str[i]=='P') ppos=i;
			if(str[i]=='T') tpos=i;
			c=len-1-tpos;
			b=tpos-ppos-1;
			a=ppos;
		}
		if(map['P']==1&&map['T']==1&&map['A']!=0&&map.size()==3&&c==(a*b)&&ppos<tpos&&tpos-ppos!=1){
				cout<<"YES\n";
			}else{
				cout<<"NO\n";
		}
	}
	return 0;
}
 
