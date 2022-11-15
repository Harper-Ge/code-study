#include<iostream>
using namespace std;
int change(char x)
{
	if(x=='B') return 0;
	if(x=='C') return 1;
	if(x=='J') return 2;
}
int max(int *a){
	int max=0,ind;
	for(int i=0;i<3;i++){
		if(a[i]>max){
			max=a[i];
			ind=i;
		} 
	}	
	return ind;
}
void count(int n){
	int sum=n;
	char a,b;
	char val[]={'B','C','J'};
	int js[3] = {0}, ys[3] = {0};
	int win=0,los=0;
	while(n--){
		cin>>a>>b;
		int ia=change(a);
		int ib=change(b);
		if((ia+1)%3==ib){
			win++;
			js[ia]++;
		}
		if((ib+1)%3==ia){
			los++;
			ys[ib]++;
		}
	}
	cout<<win<<" "<<sum-win-los<<" "<<los<<endl;
	cout<<los<<" "<<sum-win-los<<" "<<win<<endl;
	cout<<val[max(js)]<<" "<<val[max(ys)];
} 
int main(){
	int n;
	cin>>n;
	count(n);
	return 0;
}
