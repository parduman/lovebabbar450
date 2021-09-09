#include <iostream>
#include <vector>
#include <stack>
#include <utility>

using namespace std;

int main(){
    int n;
    cin >>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >>v[i];
    }
    stack <pair<int,int>> st;
    vector<int> ans;
    ans.push_back(1);
    st.push(make_pair(v[0],0));
    for(int i=1; i<=v.size()-1; i++){
        while(st.size()>0 && st.top().first<=v[i]){
            st.pop();
        }
        if(st.size() == 0){
            ans.push_back(i+1);
        } else {
            ans.push_back(i-st.top().second);
        }
        st.push(make_pair(v[i],i));
    }
    for(int i=0;i<ans.size();i++){
        cout <<ans[i] <<endl;
    }
}