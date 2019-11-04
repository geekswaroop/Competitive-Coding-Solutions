int Solution::maximumGap(const vector<int> &A) { 
    vector< pair<int,int> >s; 
    int i,temp; 
    for(i=0;i<A.size();i++) 
    {
      s.push_back(make_pair(A[i], i)); 
    } 
    sort(s.begin(),s.end()); 
    int ans =0; int mn = INT_MAX; 
    for(i=0;i<A.size();i++) 
    { if(s[i].second<mn) mn = s[i].second; 
      if(ans<s[i].second-mn) ans = s[i].second-mn;
    } 
    return ans;
}