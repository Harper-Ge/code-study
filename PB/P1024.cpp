#include<iostream>
#include<string>
using namespace std;
int main(){
	char h,a[10001]={0};
	int i,e;
	scanf("%c%c.%[0-9]E%d",&h,&a[0],a+1,&e);
	if(h=='-') cout<<"-";
	if(e<0){
		cout<<"0.";
		e=-e-1;
		while(e--){
			cout<<"0";
		}
		printf("%s",a);
	}else{
		for(i=0;i<=e||a[i]!=0;i++){
			if(i==e+1) cout<<".";
			printf("%c",a[i]==0?'0':a[i]);
		}
	}
	return 0;
} 
