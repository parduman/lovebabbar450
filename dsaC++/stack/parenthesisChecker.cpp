#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> sta;
        for(int i = 0; i< x.size(); i++){
            if(x[i] == '{' || x[i] == '[' || x[i] == '('){
                sta.push(x[i]);
                continue;
            }
            if(sta.empty()){
                return false;
            }
            switch(x[i]){
                case '}':
                    if(sta.top() == '{'){
                        sta.pop();
                    } else {
                        return false;
                    }
                    break;
                case ']':
                    if(sta.top() == '['){
                        sta.pop();
                    } else {
                        return false;
                    }
                    break;
                case ')':
                    if(sta.top() == '('){
                        sta.pop();
                    } else {
                        return false;
                    }
                    break;
            }
        }
        if(!sta.empty()){
            return false;
        }
        return true;
    }
};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends



//1
// {([])}