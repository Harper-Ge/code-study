
#include<iostream>
#include<cmath>
using namespace std;
int is_prime(int n){
	if(n==1) return 0;
	for(int i=2;i<=sqrt(n);++i){
		if(n%i==0) return 0;
	}
	return 1;
}
int main()
 
{
	int m,n,a=0;	//��a����¼�ǵڼ��������� 
	cin >> m>>n;
	int first=2,count=0; // first��һ���ж��ǲ���������count����¼����˼��������ˡ� 
	while(a<n){
		if(is_prime(first)){
			a++;
			if(a>=m){
				cout << first;
				count++;
				if(count%10==0) cout <<endl;
				else if(a!=n) cout<<" ";
			}
			
		}
		first++;
	}
	return 0;
}

