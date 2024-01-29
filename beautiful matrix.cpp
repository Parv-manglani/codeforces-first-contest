#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[5][5];
	int p,k,m,t,s;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin >> a[i][j];
		}
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(a[i][j]==1){
				p=i;
				k=j;
			}
		}	
	}       t=p-2;
	    	s=k-2;
	    	if(t<0)  t=-t;
	    	if(s<0)  s=-s;
	        m=t+s;
   printf("%d",m);}
	
