#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	char c[100];
	int k=0;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> c[i] ;
	}
	for(int i=0;i<n;i++){
		if(c[i]==c[i+1])
			k+=1;
	}printf("%d",k);
}