#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b,k;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a >> b;
			k=a%b;
		if(k==0){
			printf("%d\n",0);
		}
		else printf("%d\n",b-k);
	}
 
}