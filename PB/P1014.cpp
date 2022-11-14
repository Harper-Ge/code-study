#include<iostream>
#include<string.h>
#include <algorithm>
using namespace std;
int main(){
	char c1[60],c2[60],c3[60],c4[60];
	int cnt=0;
	cin>>c1>>c2>>c3>>c4;
	string weight[7] = { "MON","TUE","WED","THU","FRI","SAT","SUN" };
	int len1=min(strlen(c1),strlen(c2));
	int len2=min(strlen(c3),strlen(c4));
	for(int i=0;i<len1;i++){
		if(!cnt){
			if('A'<=c1[i]&&c1[i]<='G'&&c1[i]==c2[i]){
					cnt++;
					cout<<weight[c1[i]-'A']<<" ";
			}
		}else{
			if (c1[i]<='9'&&c1[i]>='0' && c1[i] == c2[i])
			{
				printf("%02d:", (c1[i] - '0'));
				break;
			}
			else if (c1[i] >= 'A'&&c1[i] <= 'N'&&c1[i] == c2[i])
			{
				printf("%02d:", (c1[i] - 'A' + 10));
				break;
			}
		}
		
	} 
	for(int i=0;i<len2;i++){
		if(isalpha(c3[i])&&c3[i]==c4[i]){
			printf("%02d",i);
			break;
		}
	}
	return 0;
} 
