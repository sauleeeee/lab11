#include <bits/stdc++.h>
using namespace std;
string same(string s,string t){
	set <char> ss;
	for(int i=0;i<s.size();i++){
		for(int j=0;j<t.size();j++){
			if(s[i]==t[j]){
				ss.insert(t[j]);
			}
		}
	}
	string st="";
	set <char> :: iterator it=ss.begin();
	for(;it!=ss.end();it++){
		st+=*it;
	}
	return st;
}
int main(){
	int n;
	cin>>n;
	vector <string> vt;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		vt.push_back(s);
	}
	string ans="qwertyuiop[asdfghjklzxcvbnm";
	for(int i=0;i<vt.size();i++){
		ans=same(ans,vt[i]);
	}
	if(ans.size()==0){
		cout<<"NO COMMON CHARACTERS";
		return 0;
	}
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
