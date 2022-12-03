#include<iostream>
 using namespace std;
 int main(){
 	int n;
 	char c;
 	cin>>n>>c;
 	double row=n*1.0/2+0.5;
 	for(int i=0;i<(int)row;i++){
 		if(i==0||i==(int)row-1){
 			for(int j=0;j<n;j++) cout<<c;
 			cout<<endl;
		 }else{
		 	for(int j=0;j<n;j++){
		 		if(j==0||j==n-1){
		 			cout<<c;
				 }else{
				 	cout<<" ";
				 }

			 }
			 cout<<endl;
		 }
	 }
	 return 0;
 }
