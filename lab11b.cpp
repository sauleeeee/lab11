#include <bits/stdc++.h>
using  namespace std;
int main(){
	int n;
	cin>>n;
	set <int> ss;
	for(int i=0;i<n;i++){
		int k;
		cin>>k;
		ss.insert(k);
	}
	if(ss.size()==n){
		cout<<"YES";
		
	}
	else {
		cout<<"NO";
	}
}
