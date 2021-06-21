#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
            int start =0, end =n-1;
    for(int i=0;i<=end;){
        if(a[i] == 0){
            a[i] = a[start];
            a[start] = 0;
            start++;
            i++;
        } else if(a[i] == 2){
            a[i] = a[end];
            a[end] = 2;
            end--;
        } else {
            i++;
        }
    };
        // coode here 
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends
// 1
//   5
// 0 2 1 2 0