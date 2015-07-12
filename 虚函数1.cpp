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
		void f(){
			cout<<"A"<<endl;
		}   //此处函数不是虚函数 
};
class B:public A{
	public:
		void f(){
			cout<<"B"<<endl;
		}
};
int main(){
	A a,*pa;
	B b;
	a=b;  //将子类对象付给基类对象
	a.f();
	pa=&b; //用子类的对象的地址给基类指针初始化
	pa->f(); 
	b.f();
	/*原因：编译器默认为静态联编方式，所以函数f(),在编译过程中就已经定死了，
	在子类中尽管你重新定义了f()的方法，但是编译器不知道应该调用哪个函数，所以就只会用静态联编时的函数方法。 */
	return 0;
}
