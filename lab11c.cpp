#include <bits/stdc++.h>
using  namespace std;
//bool comp(pair <string,float>pr,pair <string,float> pr2){
//	if(pr.second<pr2.second)
//	return true;
//	return false;
//	
//}
int main(){
	int n;
	cin>>n;
	map <string,float> mp;
	int sum=0;
	for(int i=0;i<n;i++){
		string st;
		cin>>st;
		int k;
		cin>>k;
		mp[st]+=k;
		sum+=k;
	}
	vector < pair<float,string> > vt;
		map <string,float> :: iterator it=mp.begin();
		for(it;it!=mp.end();it++){
			mp[it->first]=(it->second*100)/sum;
			vt.push_back(make_pair(it->second,it->first));
		}
		sort(vt.rbegin(),vt.rend());
		for(int i=0;i<vt.size();i++){
			cout<<vt[i].second<<" "<<vt[i].first<<"%"<<endl;
		}
	}
	
