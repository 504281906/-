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
int a[1000];
void Megary(int begin,int mid,int end,int t[]){
	int i=begin,j=mid+1,k=0;
	while(i<=mid && j<=end){
		if (a[i]<=a[j])
			t[k++]=a[i++];
		else
			t[k++]=a[j++];
	}
	while(i<=mid) t[k++]=a[i++];
	while(j<=end) t[k++]=a[j++];
	for (int i=0;i<k;i++)
		a[begin+i]=t[i];
}
void Megsort(int begin,int end,int t[]){
	if (begin<end){
		int mid=(begin+end)/2;
		Megsort(begin,mid,t);
		Megsort(mid+1,end,t);
		Megary(begin,mid,end,t);
	}
}
int main(){
	int n,T;
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	scanf("%d",&T);
	while(T--){
		scanf("%d",&n);
		for (int i=0;i<n;i++)
			scanf("%d",&a[i]);
		int *p=new int[n];
		Megsort(0,n-1,p);
		for (int i=0;i<n;i++)
			printf(i==0?"%d":" %d",a[i]);
		cout<<endl;
		delete []p;
	}
	return 0;
}
