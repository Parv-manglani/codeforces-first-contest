#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[500];
	int p=0,q=0;
	scanf("%s",a);
	for(int i=0;a[i]!='\0';i++){
		if(a[i]>=65 && a[i]<=90)
		p++;
		else
		q++;
	}
	if(p>q){
		for(int i=0;a[i]!='\0';i++){
			if(a[i]>=97 && a[i]<=122){
				a[i]=a[i]-32;
			}
			
			}
		}
	else
	{
		for(int i=0;a[i]!='\0';i++){
			if(a[i]>=65 && a[i]<=90){
			   a[i]=a[i]+32;}
		}
	} printf("%s",a);
}