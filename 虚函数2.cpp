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
class A{
	public :
		virtual void f(){  // 注意此处声明了虚函数 
			cout<<"A"<<endl;
		}
};
class B:public A{
	public :
		void f(){
			cout<<"B"<<endl;
		}
};
int main(){
	A a,*pa;
	B b;
	a=b;//将子类对象赋给基类对象，这样做不能实现动态联编，虚函数特性失效
	a.f();
	b.f();
	pa=&b;
	pa->f();
	A &aa=b;
	aa.f(); 
	return 0;
}
