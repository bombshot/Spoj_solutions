#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ar[100008];
int main(){
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL) ;
		ll t;
		cin>>t;
		ll m=t;
		while(t--){
			ll n;
			cin>>n;
			ll k=n%3;
			ll p=n-k;
			if(k==0){
                k+=3;
                p-=3;
			}
			while(p>=0 && k%5!=0){
				p=p-3;
				k=k+3;
			}
			if(p<=0 || k%5!=0){
				cout<<"Case "<<m-t<<": "<<-1<<endl;
			}
			else{
				cout<<"Case "<<m-t<<": "<<p<<endl;
			}
		}
	return 0;
}
