#include<iostream>
using namespace std;
int main(){
	int n,s,g,flag;
	cin>>n;
	int a[100000]={0};
	for(int i=1;i<=n;i++){
		cin>>s>>g;
		a[s]+=g;
	}
	int max=-1;
	for(int i=1;i<=n;i++){
		if(a[i]>max) {
			max=a[i];
			flag=i;
		}
	}
	cout<<flag<<" "<<max;
	return 0;
} 
