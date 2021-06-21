#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        int maxSum = arr[0];
        int currentSum=0;
        for(int i=0;i<n;i++){
            currentSum += arr[i];
           if(currentSum<0){
                currentSum = 0;
            }
            if(currentSum>maxSum){
                maxSum = currentSum;
            }
        }
     return maxSum;
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

// 1
// 5
// 1 2 3 -2 5