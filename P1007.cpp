#include<iostream>
using namespace std;
int prime[50000];
int on[100010]={1,1};
void findPrime(long n){
	int k=0;
	for(int i=2;i<=n;i++){
		if(!on[i]) prime[++k]=i;
		for(int j=1;j<=k;j++){
			if(i*prime[j]>n) break;
			on[i*prime[j]]=1;
			if(i%prime[j]==0) break;
		}
	}
}
int main(){
	int i=1,sum=0;
	long n;
	cin>>n;
	findPrime(n);
	while(prime[i+1]){
		if(prime[i+1]-prime[i]==2) sum++;
		i++;
	}
	cout<<sum;
	return 0;
} 
