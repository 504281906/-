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
		}   //�˴����������麯�� 
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
	a=b;  //��������󸶸��������
	a.f();
	pa=&b; //������Ķ���ĵ�ַ������ָ���ʼ��
	pa->f(); 
	b.f();
	/*ԭ�򣺱�����Ĭ��Ϊ��̬���෽ʽ�����Ժ���f(),�ڱ�������о��Ѿ������ˣ�
	�������о��������¶�����f()�ķ��������Ǳ�������֪��Ӧ�õ����ĸ����������Ծ�ֻ���þ�̬����ʱ�ĺ��������� */
	return 0;
}
