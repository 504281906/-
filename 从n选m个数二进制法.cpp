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
int f=0;
void go(int n,int m,int b[]){
	while(1){
		int t=0;
		int pos=0;
		for (int i=0;i<n;i++){
			if (b[i]){
				printf(t==0?"%d":" %d",a[i]);
				if (t==0) pos=i;
				t++;
			}
			if (t==m) break;
		}
		cout<<endl;
		f++;
		if (pos==n-m) return;
		for (int i=0;i<n;i++)
			if (b[i]==1 && b[i+1]==0){
				swap(b[i],b[i+1]); 
				if (b[0]==0){
					for (int j=0,k=0;k<i;k++)
						if (b[k]){
							swap(b[k],b[j]);
							j++;
						}
				}
				break;
			}
	}
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int* b=new int[m];
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if (i<m) b[i]=1;
			else b[i]=0;
	}
	go(n,m,b);
	delete []b;
	cout<<f<<endl;
	return 0;
}
