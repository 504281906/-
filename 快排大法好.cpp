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
int a[]={};
int go(int begin,int end){
	int p=end;
	int t=begin;
	for (int i=begin;i<end;i++)
		if (a[i]<a[p]){
			swap(a[i],a[t]);
			t++;
		}
	swap(a[t],a[p]);
	return t;
}
void FastRow(int begin,int end){  //logn 
	if (begin<end){
		int mid=go(begin,end);
		FastRow(begin,mid-1);
		FastRow(mid+1,end);
	}
}
int main(){
	int n,i;
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	FastRow(0,n-1);
	for (i=0;i<n;i++)
		printf(i==0?"%d":" %d",a[i]);
	cout<<endl;
	return 0;
}
