#include<iostream>
#include<stack>
#include <climits>

using namespace std;

void push(stack<int>& s,int a);
bool isFull(stack<int>& s,int n);
bool isEmpty(stack<int>& s);
int pop(stack<int>& s);
int getMin(stack<int>& s);
//This is the STL stack (http://quiz.geeksforgeeks.org/stack-container-adaptors-the-c-standard-template-library-stl/).

stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty(s)){
		    pop(s);
		}
		while(!isFull(s,n)){
			cin>>a;
			push(s,a);
		}
		cout<<getMin(s)<<endl;
	}
}// } Driver Code Ends


int minValue = INT_MAX;
int dummyValue = 99999;
void push(stack<int>& s, int a){
    if(a < minValue){
        minValue = a;
    }
    s.push(a*dummyValue + minValue);
	// Your code goes here
	
}

bool isFull(stack<int>& s,int n){
    if(s.size() == n){
        return true;
    }
    return false;
	// Your code goes here
}

bool isEmpty(stack<int>& s){
    if(s.empty())
        return true;
    return false;
	// Your code goes here
}

int pop(stack<int>& s){
    int value = s.top();
    minValue = value%dummyValue;
    s.pop();
    return value/dummyValue;
	// Your code goes here
}

int getMin(stack<int>& s){
    return minValue;
	// Your code goes here
}



//1
// 5
// 18 19 29 15 16