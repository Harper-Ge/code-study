#include<bits/stdc++.h>
using namespace std;
int cnt[256]={0};
int main(){
	char sold[1000],buy[1000];
	int i;
	cin>>sold>>buy;
	for(i=0;i<strlen(sold);i++){
		cnt[sold[i]]++;
	}
	int res=0;
	for(i=0;i<strlen(buy);i++){
		if(cnt[buy[i]]>0)
			cnt[buy[i]]--;
		else
			res++;
	}
	if(res)
		cout<<"No "<<res;
	else
		cout<<"Yes "<<strlen(sold)-strlen(buy);
		
	return 0;
} 
