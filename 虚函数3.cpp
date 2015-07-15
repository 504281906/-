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
	public:
		virtual void f(){
			cout<<"A's f()"<<endl;
		}
		virtual void g(){
			cout<<"A's g()"<<endl;
		}
};
class B:public A{
	public:
		void f(){
			cout<<"B's f()"<<endl;
		}
};
class C:public A{
	public:
		void g(){
			cout<<"C's g()"<<endl;
		}
};
int main(){
	A *pa;
	B b;
	C c;
	pa=&b;
	pa->f();
	pa->g();
	pa=&c;
	pa->f();
	pa->g();
	return 0;
}
