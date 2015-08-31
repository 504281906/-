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
#define delta 0.98 //模拟退火递增变量
#define INF 0x7fffffff
using namespace std;
int main(){
	int a[2][3];
	char s[10][10];
	LL g[20];
	int t=0;
	memset(g,0,sizeof(g));
	for (int i=0;i<2;i++)
		for (int j=0;j<3;j++){
			sprintf(s[t++],"%8x",&a[i][j]);
		//	cout<<s[t-1]<<endl;
		}
	for (int i=0;i<t;i++)
	{
		for (int j=2;j<strlen(s[i]);j++)
			s[i][j-2]=s[i][j];
		s[i][strlen(s[i])-2]='\0';
	}
	for (int i=0;i<t;i++)
		cout<<s[i]<<endl;
	cout<<"*********"<<endl;
	LL k=1;
	for (int j=strlen(s[0])-1;j>=0;j--){
		for (int i=0;i<t;i++){
			if (isalpha(s[i][j])) g[i]+=k*(s[i][j]-'a'+10);
			else g[i]+=k*(s[i][j]-'0');
		}
		k*=16;
	}
	for (int i=0;i<t;i++)
		cout<<g[i]<<endl;
	return 0;
}
