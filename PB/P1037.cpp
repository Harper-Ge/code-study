#include<bits/stdc++.h> 
using namespace std;
int main(){
	int n1,n2,n3,g1,g2,g3;
	scanf("%d.%d.%d %d.%d.%d",&n1,&n2,&n3,&g1,&g2,&g3);
	int cnt=g1*17*29+g2*29+g3-n1*17*29-n2*29-n3;
	if(cnt<0){
		cnt=-cnt;
		printf("-");
	}
	printf("%d.%d.%d",cnt/29/17,(cnt/29)%17,cnt%29);
	return 0;
}
