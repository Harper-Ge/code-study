#include<bits/stdc++.h>
using namespace std;
int L[100001][2]={0},add[100001]={0};
int main(){
	int n,k,i,j,valid=0;
	cin>>add[0]>>n>>k;
	for(i=0;i<n;i++){
		int a;
		cin>>a;
		cin>>L[a][0]>>L[a][1];
	}
	for(i=0;add[i]!=-1;i++){
		add[i+1]=L[add[i]][1];
		valid++;
	}
	if(k>1&&k<=valid){
		for(i=k-1;i<valid;i+=k){
			for(int j=i,cnt=0;cnt<k;j--,cnt++) {
				cnt!=k-1?(L[add[j]][1]=add[j-1]):(i+k<valid?L[add[j]][1]=add[i+k]:L[add[j]][1]=add[i+1]);
			}
	}
	for(i=0,j=(k<=valid?add[k-1]:add[0]);i<valid;i++,j=L[j][1]){
		L[j][1]==-1?printf("%05d %d -1\n",j, L[j][0]):printf("%05d %d %05d\n",j, L[j][0], L[j][1]);
	}
	return 0;
}}
