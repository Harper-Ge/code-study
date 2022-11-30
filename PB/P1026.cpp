#include<iostream>
using namespace std;
int main(){
	double c1,c2,time;
	int h,m,s,clk=100;
	cin>>c1>>c2;
	time=(c2-c1)/100;
	h=(int)(time/3600);
	m=(int)((time-h*3600)/60);
	s=(int)(time-h*3600-m*60);
	if(time-h*3600-m*60-s>=0.5) s++;
	printf("%02d:%02d:%02d",h,m,s);
	return 0;
} 
