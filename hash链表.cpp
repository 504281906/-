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
struct node{
	int data;
	node *next;
};
struct hash_table{
	node *value[10];
};
hash_table* creat_hash_table(){
	hash_table *phashtbl=new hash_table[sizeof(hash_table)];
	memset(phashtbl,0,sizeof(hash_table));
	return phashtbl;
}
node* find_hash_table(hash_table *phashtbl,int data){
	node* pnode;
	if (phashtbl==NULL) return NULL;
	if ((pnode=phashtbl->value[data%10])==NULL) return NULL;
	while (pnode){
		if (data==pnode->data)
			return pnode;
		pnode=pnode->next;
	}
	return NULL;
}
bool insert_hash_table(hash_table *phashtbl,int data){
	node *pnode;
	if (NULL==phashtbl) return false;
	if (NULL==phashtbl->value[data%10]){
		pnode=new node[sizeof(node)];
		memset(pnode,0,sizeof(node));
		pnode->data=data;
		phashtbl->value[data%10]=pnode;
		return true;
	}
	if (NULL!=(find_hash_table(phashtbl,data))) return false;
	pnode=phashtbl->value[data%10];
	while (NULL!=pnode->next)
		pnode=pnode->next;
	pnode->next=new node[sizeof(node)];
	memset(pnode->next,0,sizeof(node));
	pnode->next->data=data;
	return true;
}
bool delete_hash_table(hash_table *phashtbl,int data){
	node *pnode;
	node *phead;
	if (NULL==phashtbl || NULL==phashtbl->value[data%10]) return false;
	if (NULL==(pnode=find_hash_table(phashtbl,data))) return false;
	if (pnode==phashtbl->value[data%10]){
		phashtbl->value[data%10]=pnode->next;
		delete pnode;
		return true;
	}
	phead=phashtbl->value[data%10];
	while (pnode!=phead->next){
		phead=phead->next;
	}
	phead->next=pnode->next;
	delete pnode;
	return true;
}
int main(){
	hash_table *k=creat_hash_table();
	insert_hash_table(k,10);
	insert_hash_table(k,11);
	insert_hash_table(k,12);
	insert_hash_table(k,13);
	insert_hash_table(k,14);
	insert_hash_table(k,15);
	insert_hash_table(k,16);
	insert_hash_table(k,23);
	delete_hash_table(k,13);
	node *kk=find_hash_table(k,23);
	if (kk==NULL) cout<<"NO"<<endl;
	else cout<<kk->data<<endl;
	return 0;
}
