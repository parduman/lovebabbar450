#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


    bool sortbysec(const pair<int,int> a,
              const pair<int,int> b)
{
    return (a.second < b.second);
}
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.

    
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector <pair<int,int>> set;
        for(int i=0; i< n ; i++){
            pair<int,int> p;
            p.first = start[i];
            p.second = end[i];
            set.push_back(p);
        }
        sort(set.begin(), set.end(), sortbysec);
        int startTime = 0, endTime = 0, meetings = 0;
        for(vector <pair<int,int>>::iterator it= set.begin(); it < set.end(); it++){
            if(endTime < it->first){
                endTime = it->second;
                startTime = it->first;
                meetings++;
            }
        }
        return meetings;
    }
    
    
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends


// 1
// 8
// 75250 50074 43659 8931 11273 27545  50879  77924
// 112960 114515 81825 93424 54316 35533 73383 160252