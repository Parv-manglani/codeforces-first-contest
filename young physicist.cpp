#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int k=0,l=0,m=0,d=0,p=0,j=0;
	int arr[1000];
	int x[1000];
	int y[1000];
	int z[1000];
	cin >> n ;
	for(int i=0;i<3*n;i++)
	{cin >> arr[i];}
	for(int i=0;i<3*n;i+=3){
		x[k]=arr[i];
		k++;}
	for(int i=1;i<3*n;i+=3){
		y[l]=arr[i];
		l++;}
	for(int i=2;i<3*n;i+=3){
		z[m]=arr[i];
		m++;}
	for(int i=0;i<n;i++){
		p+=x[i];
		j+=y[i];
		d+=z[i];
	}  
	if(p==0 && j==0 && d==0)
	cout << "YES";
	else
	cout << "NO";
}