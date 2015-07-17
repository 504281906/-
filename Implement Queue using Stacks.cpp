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
class Queue {
private:
	stack<int>st1;
	stack<int>st2;		
public:
    // Push element x to the back of queue.
    void push(int x) {
        st1.push(x);
    }

    // Removes the element from in front of queue.
    void pop(void) {
        if (!st2.empty()) 
			st2.pop();
		else {
        while(!st1.empty()){
        	st2.push(st1.top());
        	st1.pop();
        }
        st2.pop();
    	}
    }

    // Get the front element.
    int peek(void) {
        if (!st2.empty()) return st2.top();
        while (!st1.empty()){
        	st2.push(st1.top());
        	st1.pop();
        }
        return st2.top();
    }

    // Return whether the queue is empty.
    bool empty(void) {
        return (st1.empty() && st2.empty());
    }
}g;
int main(){
	g.push(1);
	g.push(2);
	cout<<g.empty()<<endl;
	cout<<g.peek()<<endl;
	g.pop();
	cout<<g.peek()<<endl;
	g.pop();
	cout<<g.empty()<<endl;
	return 0;
}
