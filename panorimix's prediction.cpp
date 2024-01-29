#include<bits/stdc++.h>
using namespace std;
int prime(int k){
	int p=0;
	for(int i=2;i<k;i++){
		if(k%i==0)
return false;}
	 return true;
}
int main()
{
   int n,m,t;
   int k;
   cin >> n >> m ;
   for(int i=n+1;i>n;i++){
    	if(prime(i)==true){
    		if(i==m) printf("YES");
    		else  printf("NO");
    		break;
		}
} 
}