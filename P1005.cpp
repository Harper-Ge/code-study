#include<iostream>
using namespace std;

int main(){
	int n,i,num[100] = {0},flag;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>flag;
		num[flag]=1;
	}

	for(i = 1; i <= 100; i++){
        if(num[i]){
            for(int j = i; j > 1; ){
                if(j % 2)  j = (3 * j + 1) / 2;
                else       j /= 2;

                if(j <= 100 && num[j]){
                    num[j] = 0;     
                    n--;               
                    if(j < i) break;   
                }
            }
        }
    }
    for(int i = 100; i >= 1; i--)
        if(num[i] == 1)
            printf("%d%c", i, --n ? ' ' : '\0');
	return 0;
} 
