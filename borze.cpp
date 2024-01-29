#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[1000];
	scanf("%s",a);
	for(int i=0;a[i]!='\0';i++){
		if(a[i]=='.'){
			printf("0");
		}
		else
		if(a[i+1]=='.'){
			printf("1");
			i++;
		}else{
			printf("2");
			i++;
		}
	}
}