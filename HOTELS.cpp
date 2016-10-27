#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ar[1000008];
int main(){
	ll n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	ll sum=0;
	ll maxi=0;
	for(int i=0,j=0;j<n;j++){
            sum+=ar[j];
		while(i<=j && sum>m){
			sum-=ar[i];
			i++;
		}
		maxi=max(maxi,sum);
		//cout<<maxi<<endl;
	}
	cout<<maxi;
	return 0;
}
