#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ar[1000008];
int main(){
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL) ;
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		for(int i=0;i<n;i++){
			string s;
			ll a;
			cin>>s;
			cout<<s<<endl;
			if(s[0]=='d'){
				ar[i]=1;
			}
			else{
				cin>>a;
				a--;
				ar[i]=-a;
			}
		}
		ll sum=0;
		for(int i=n-1;i>=0;i--){
			if(ar[i]<0){
				sum++;
				ar[ar[i]*(-1)]=0;
			}
			else if(ar[i]>0){
				sum++;
			}
		}
		cout<<sum<<endl;
		for(int i=0;i<n;i++){
		    if(ar[i]!=0){
		        cout<<i+1<<" ";
		    }
		}
	}
	return 0;
}
