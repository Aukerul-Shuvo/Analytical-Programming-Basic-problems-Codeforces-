#include<bits/stdc++.h>
#include<stdio.h>
#include<string>
using namespace std;
int main(){
	string n;
	long long ans=0;
	cin>>n;
	for(int i=0;i<n.size();i++){
		if(n.substr(i,5)=="Danil")ans++;
		if(n.substr(i,4)=="Olya")ans++;
		if(n.substr(i,5)=="Slava")ans++;
		if(n.substr(i,3)=="Ann")ans++;
		if(n.substr(i,6)=="Nikita")ans++;
	}
	if(ans==1)
        printf("YES\n");
    else
        printf("NO\n");

return 0;
}
