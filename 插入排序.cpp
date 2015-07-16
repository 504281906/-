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
void insert(int n){
	for (int i=1;i<n;i++){
		int j=i-1;
		while (j>=0){
			if (a[j]>a[j+1]) swap(a[j],a[j+1]);
			else break;
			j--;
		}
	}
}
int main(){   //插入排序，按照从后往前，插。 默认下标0是已经排好序 
	int n;
	scanf("%d",&n);
	for (int i=0;i<n;i++)
		scanf("%d",&a[i]);
	insert(n);
	for (int i=0;i<n;i++)
		printf(i==0?"%d":" %d",a[i]);
	return 0;
}
