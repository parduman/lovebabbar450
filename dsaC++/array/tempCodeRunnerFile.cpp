// code here
        vector< pair<int,int> > v;
        for(int i=0;i<n;i++){
            if(arr[i] - k > 0){
                v.push_back( make_pair(arr[i] - k, i) );
            };
            v.push_back( make_pair(arr[i] + k, i) );
        };
        sort(v.begin(), v.end());
        for(vector< pair<int,int> >::iterator it= v.begin();it < v.end(); it++){
            cout << "(" << it->first <<", " << it->second <<") ";
        };
        int ans = INT_MAX;
        int size = 0;
        int currentIndex = 0;
        for(vector< pair<int,int> >::iterator it= v.begin();it < v.end(); it++){
            vector < int > checker(n);
            int whileChecker = currentIndex;
            while(whileChecker < v.size()){
                if(checker[ v[whileChecker].second ] == 0){
                    size++;
                }
                if(size == n){
                    break;
                }
                checker[v[whileChecker].second]++;
                whileChecker++;
            }
            if(size != n){
                break;
            }
            cout <<endl;
            cout <<currentIndex <<" " <<whileChecker << " " << (v[whileChecker].first - v[currentIndex].first);
            cout <<endl;
            if((v[whileChecker].first - v[currentIndex].first) < ans){
                ans = v[whileChecker].first - v[currentIndex].first;
            }
            currentIndex++;
            size = 0;
        };
        return ans;