#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	char c[200000];
	int k=0;
	cin >> n;
	for(int i=0;i<n;i++){
		if(i==0 || i%4==0)
		{c[k]=97;
		 k++;}
		if(i%4==1)
		{c[k]=98;
		 k++;}
		 if(i%4==2)
		{c[k]=99;
		 k++;}
		if(i%4==3)
		{c[k]=100;
		 k++;}
	}printf("%s",c);
}