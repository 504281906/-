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
int a[100];
int f;
void go(int n,int m,int b[],int t){//从n个数中选t个数，保存在b数组中。 
	if (t==0){
		for (int i=m-1;i>=0;i--)
			printf(i==(m-1)?"%d":" %d",b[i]);
		cout<<endl;
		f++;
		return;
	}
	for (int i=n;i>=t;i--){
		b[t-1]=a[i-1];
		go(i-1,m,b,t-1);
	}
}
int main(){
	int n,m;
	f=0;
	scanf("%d%d",&n,&m);
	for (int i=0;i<n;i++)
		scanf("%d",&a[i]);
	int* b=new int[m];
	go(n,m,b,m);
	cout<<f<<endl;
	delete []b; 
	return 0;
}
