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
void shell(int n){   //希尔排序，用增量递减的方式的一直插入排序。时间复杂度N*(logN)*2 
	for (int i=n/2;i>0;i/=2){
		for (int j=i;j<n;j++){
			int t=a[j];
			for (int k=j-i;k>=0 && t<a[k];k-=i)
				swap(a[k],a[k+i]);
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	for (int i=0;i<n;i++)
		scanf("%d",&a[i]);
	shell(n);
	for (int i=0;i<n;i++)
		printf(i==0?"%d":" %d",a[i]);
	cout<<endl;
	return 0;
}
