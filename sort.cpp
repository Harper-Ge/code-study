#include<bits/stdc++.h>
using namespace std;
void Bubble(int a[], int n){
	printf("ð������");
	int i,j,temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
void swap(int arr[],int a,int b){
	int t=arr[a];
	arr[a]=arr[b];
	arr[b]=t;
}
void Select(int a[],int n){\
	printf("ѡ������");
	int i,j,min;
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(a[min]>a[j]) min=j;
		}
		swap(a,min,i);
	}
}
void InsertSort(int a[],int n){
	int temp,i,j;
	printf("��������");
	for(i=1;i<n;i++){
		temp=a[i];
		for(j=i-1;j>=0&&a[j]>temp;j--){
			a[j+1]=a[j];
		}
		a[j+1]=temp;
	}
}
int main(){
	int n,i;
	printf("����������Ԫ�ظ�����\n");
	cin>>n;
	int a[n];
	printf("����������Ԫ��:\n");
	for(i=0;i<n;i++){
		cin>>a[i];
	}
//	Bubble(a,n);
//	Select(a,n); 
	InsertSort(a,n);
	printf("����ǣ�\n");
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}

} 
