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
/*
	交换两个相邻的数字，时间复杂度是n^2,属于稳定排序。 
*/
int a[]={};
void go(int n){
	for (int i=0;i<n;i++)
		for (int j=i+1;j<n;j++)
			if (a[i]>a[j]) swap(a[i],a[j]);
}
int main(){
	int n;
	scanf("%d",&n);
	for (int i=0;i<n;i++)
		scanf("%d",&a[i]);
	go(n);
	for (int i=0;i<n;i++)
		printf(i==0?"%d":" %d",a[i]);
	cout<<endl;
	return 0;
}
