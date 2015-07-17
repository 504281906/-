#include<limits>
#include<queue>
#include<vector>
#include<list>
#include<map>
#include<set>
#include<deque>
#include<stack>
#include<bitset>
#include<algorithm>
#include<functional>
#include<numeric>
#include<utility>
#include<sstream>
#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<ctime>
#define LL __int64
#define eps 1e-8
#define pi acos(-1)
using namespace std;
stack<char>st;
string s="";
string ans="";
map<char,int>mp;
int go(char c){
	if (mp.find(c)==mp.end()) return 0;
	if (c==')' || st.empty()){
		st.push(c);
		return 1;
	}
	if (c=='('){
		while(1){
			if (st.empty()) return 0;
			char k=st.top();
			st.pop();
			if (k==')') return 1;
			ans+=k;
		}
	}
	char k=st.top();
	if (mp[c]>=mp[k]){
		st.push(c);
		return 1;
	}
	else{
		while(mp[c]<mp[k] && !st.empty() && k!=')'){
			ans+=k;
			st.pop();
			if (st.empty()) break;
			k=st.top();
		}
		st.push(c);
		return 1;
	}
}
int main(){
	mp['+']=0;mp['-']=0;mp['*']=1;mp['/']=1;mp['%']=1;mp[')']=0;mp['(']=0;
	printf("请输入正确的中缀表达式:\n");
	cin>>s;
	int l=s.length();
	for (int i=l-1;i>=0;i--){
		if (s[i]>='0' && s[i]<='9') ans+=s[i];
		else{
			if (!go(s[i])){
				printf("错误的中缀表达式！\n");
				return 0; 
			}
		}
		//cout<<ans<<endl;
	}
	while(!st.empty()){
		ans+=st.top();
		st.pop();
	}
	for (int i=ans.length()-1;i>=0;i--)
		printf("%c",ans[i]);
	cout<<endl;
	return 0;
}
