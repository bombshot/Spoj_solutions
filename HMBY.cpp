#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll r2,r4,r8,r16,r32,w;
	cin>>r2>>r4>>r8>>r16>>r32>>w;
	cout<<r2<<" "<<r4<<" "<<r8<<" "<<r16<<" "<<r32<<endl;
	r2=((r2*1)+(r32*16)+(r16*8)+(r8*4)+(r4*2))*2;
	cout<<r2<<endl;
	if(w%2!=0 || w>r2 ) {
		cout<<"NO";
	}
	else{
		cout<<"YES";
	}
	return 0;
}
