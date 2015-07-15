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
	从一个数组中从第一个开始选择，往后面找min=i，最小的与当前位置交换。 
*/
int a[]={};
void Choice(int n){
	for (int i=0;i<n;i++){
		int min=i;
		for (int j=i+1;j<n;j++)
			if (a[min]>a[j]) min=j;
		swap(a[i],a[min]);
	}	
}
int main(){
	int n;
	scanf("%d",&n);
	for (int i=0;i<n;i++)
		scanf("%d",&a[i]);
	Choice(n);
	for (int i=0;i<n;i++)
		printf(i==0?"%d":" %d",a[i]);
	cout<<endl;
	return 0;
}
