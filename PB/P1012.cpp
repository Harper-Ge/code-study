#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,i,cnt=0,num=0,a1=0,max=0,a2=0,a3=0,a4=0;
	cin>>n;
	int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
	for(i=0;i<n;i++){
		int re=arr[i]%5;
		if(re==0&&arr[i]%2==0){
			a1+=arr[i];
		}else if(re==1){
			a2+=pow(-1,cnt)*arr[i];
			cnt++;
		}else if(re==2){
			a3++;
		}else if(re==3){
			num++;
			a4+=arr[i];
		}else{
			if(arr[i]>max){
				max=arr[i];
			}
		}
	}
	if(a1!=0) printf("%d",a1); else printf("N");
	if(cnt!=0) printf(" %d",a2); else printf(" N");
	if(a3!=0) printf(" %d",a3); else printf(" N");
	if(a4!=0) printf(" %.1f",(double)a4/num); else printf(" N");
	if(max!=0) printf(" %d",max); else printf(" N");

} 
