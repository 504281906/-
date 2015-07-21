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
using namespace std;//建立最大堆 
int a[1000];
void Down(int fa,int n){
	int t=a[fa];
	int son=fa*2+1;
	while(son<n){
		if (son+1<n && a[son]<a[son+1])
			son++;
		if (a[son]<a[fa])
			break;
		swap(a[fa],a[son]);
		fa=son;
		son=fa*2+1; 
	}
	a[fa]=t;
}
void Up(int son,int n){
	int t=a[son];
	int fa=(son-1)/2;
	while(fa>=0 && son!=0){
		if (a[fa]>a[son])
			break;
		a[son]=a[fa];
		son=fa;
		fa=(son-1)/2;
	}
	a[son]=t;
}
int main(){
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	int n,T;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&n);
		for (int i=0;i<n;i++)
			scanf("%d",&a[i]);
		for (int i=n/2-1;i>=0;i--)
			Down(i,n);
		/*for (int i=0;i<n;i++)
			printf(i==0?"%d":" %d",a[i]);
		cout<<endl;*/
		for (int i=0;i<n;i++){
			swap(a[0],a[n-i-1]);
			Down(0,n-i-1);
		}
		for (int i=0;i<n;i++)
			printf(i==0?"%d":" %d",a[i]);
		cout<<endl;
	}
	return 0;
}
