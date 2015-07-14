// BEGIN CUT HERE

// END CUT HERE
#line 5 "Hexspeak.cpp"
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <fstream>
#include <numeric>
#include <iomanip>
#include <bitset>
#include <list>
#include <stdexcept>
#include <functional>
#include <utility>
#include <ctime>
using namespace std;
class Hexspeak
{
        public:
        string decode(long long c)
        {
        	string ans="";
        	long long t=0;
        	while (c){
        		t=c / 16;
        		int k=c-t*16;
        		c=t;
        		if (k>1 && k<10) return "Error!";
        		else{
        			if (k==0) ans='O'+ans;
        			else if (k==1) ans='I'+ans;
        			else ans=char(k-10+'A')+ans;
        		}
        	}
        	return ans;
        }
};
// BEGIN CUT HERE
int main()
{
        Hexspeak ___test;
        ___test.run_test(-1);
        return 0;
}
// END CUT HERE
