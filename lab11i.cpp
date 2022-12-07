#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s){
	for(int i = 0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-1 - i]){
			return false;
		}
	}
	return true;
}

int main (){
	string s;
	cin>>s;
	sort(s.begin(),s.end());
	do{
		if(isPalindrome(s)){
			cout<<"ZA WARUDO TOKI WO TOMARE";
			return 0;
		}
	}while(next_permutation(s.begin(),s.end()));
	cout<<"JOJO";

}
