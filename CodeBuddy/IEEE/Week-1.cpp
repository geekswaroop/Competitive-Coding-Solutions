bool compare(string a, string b)
{
  string ab = a.append(b);
  string ba = b.append(a);
  if(ab.compare(ba)>0)
    return 1;
  else
    return 0;
}
string Solution::largestNumber(const vector<int> &A) {
  int i,count=0;
  vector<string>a2(A.size());
  for(i=0;i<A.size();i++)
  {
    if(A[i]==0)
      count++;
    a2[i]=to_string(A[i]);
  }
  sort(a2.begin(),a2.end(),compare);
  string ans;
  for(i=0;i<a2.size();i++)
  {
    ans+=a2[i];
  }
  return ans;
}