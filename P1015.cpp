#include<bits/stdc++.h> 
using namespace std;
typedef struct stu{
	char id[10];
	int d;
	int c;
	int sum;
	int tag;
}stu;
bool cmp(stu s1,stu s2){
	if(s1.tag!=s2.tag){
		return s1.tag<s2.tag;
	}else if(s1.sum!=s2.sum){
		return s1.sum>s2.sum;
	}else if(s1.d!=s2.d){
		return s1.d>s2.d;
	}else{
		return strcmp(s1.id, s2.id) < 0;
	}
}
int main(){
	int n,l,h,cnt=0;
	cin>>n>>l>>h;
	stu s[n];
	for(int i=0;i<n;i++){
		scanf("%s%d%d",s[i].id,&s[i].d,&s[i].c);
		s[i].sum=s[i].d + s[i].c;
		if(s[i].d>=l&&s[i].c>=l){
			if(s[i].d>=h&&s[i].c>=h) s[i].tag=1;
			else if(s[i].d>=h&&s[i].c<h) s[i].tag=2;
			else if(s[i].d<=h&&s[i].c<=h&&s[i].d>=s[i].c) s[i].tag=3;
			else s[i].tag=4;
			cnt++;
		}else{
			s[i].tag=5;
		}
	}
	sort(s,s+n,cmp);
	cout<<cnt<<endl;
	for(int i=0;i<cnt;i++){
        cout << s[i].id << " " << s[i].d << " " << s[i].c << endl;
	}
	return 0;
}
