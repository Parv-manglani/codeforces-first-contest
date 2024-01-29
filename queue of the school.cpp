#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
	int n,t;
	cin >> n >> t;
	char a[n];
	scanf("%s",a);
	for(int j=0;j<t;j++){
	
	for(int i=0;a[i]!='\0';i++){
		if(a[i]=='B' && a[i+1]=='G')
		{
		a[i]='G';
		a[i+1]='B';
		i++;
	}
	}} printf("%s",a);
}