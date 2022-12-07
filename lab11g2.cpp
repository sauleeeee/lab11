#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	map < string, set<int> > mp;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		set <int> st;
		int k;
		cin>>k;
		st.insert(k);
		mp[s].insert(k);
	}
	map < string, set<int> > :: iterator it=mp.begin();
	for(;it!=mp.end();it++){
		if(it->second.size()>=3){
			cout<<it->first<<" +1"<<endl;
		}else{
			cout<<it->first<<" NO BONUS\n";
		}
	}
	
	
}
