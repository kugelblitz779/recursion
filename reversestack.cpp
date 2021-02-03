#include<bits/stdc++.h>
#define ll long long
using namespace std;


void insert(int key, stack<int> &st){

	if(st.size() == 0){
		st.push(key);
		return;
	}

	int item = st.top();
	st.pop();

	insert(key, st);

	st.push(item);

}


void reverse(stack<int> &st){

	

	if(st.size() == 1){
		return;
	}

	int val = st.top();
	st.pop();

	
	reverse(st);
	insert(val, st);

}


int main(){


	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n; cin>>n;

	stack<int> st;
	for(int i=0; i<n; i++){
		int a; cin>>a;
		st.push(a);
	}



	reverse(st);

	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}



	return 0;

}