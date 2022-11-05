#include<iostream>
using namespace std;
int main(){
	int n,m,arr[101],i,j;
	cin>>n>>m;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	m%=n;
	for(i=n-m,j=1;j<=n;j++){
		i%=n;
		cout<<arr[i];
		if(j!=n) cout<<" ";
		i++;
	}
	return 0;
} 
