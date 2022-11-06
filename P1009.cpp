#include<iostream>
#include<string>

using namespace std;
int main() {
	string str[40];
	int i,end;
	char c;
	for(i=0;i<40;i++){
		cin>>str[i];
		end=i;
		if((c=getchar())=='\n')
			break; 
	}
	for(i=end;i>=0;i--){
		if(i!=0){
			cout<<str[i]<<" "; 
		}else{
			cout<<str[i];
		}
	}
	
} 
