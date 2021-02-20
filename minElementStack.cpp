#include <bits/stdc++.h> 
using namespace std; 
struct MyStack 
{ 
	stack<int> s; 
	int minEle; 
	void getMin() 
	{ 
		if (s.empty()) return;
		else cout <<"Minimum"<< minEle << "\n"; 
	} 
	void peek() 
	{ 
		if (s.empty()) 
		{ 
			return; 
		} 
		int t = s.top(); 
		(t < minEle)? cout << minEle: cout << t; 
	} 
	void pop() 
	{ 
		if (s.empty()) 
		{ 
			return; 
		} 
		int t = s.top(); 
		s.pop(); 
		if (t < minEle) 
		{ 
			minEle = 2*minEle - t; 
		} 
	} 
	void push(int x) 
	{ 
		if (s.empty()) 
		{ 
			minEle = x; 
			s.push(x); 
			return; 
		} 
		if (x < minEle) 
		{ 
			s.push(2*x - minEle); 
			minEle = x; 
		} 
		else
		s.push(x); 
	} 
}; 
int main() 
{ 
	MyStack s; 
	s.push(3); 
	s.push(5); 
	s.getMin(); 
	s.push(2); 
	s.push(1); 
	s.getMin(); 
	s.pop(); 
	s.getMin(); 
	s.pop(); 
	s.peek(); 
	return 0; 
} 
