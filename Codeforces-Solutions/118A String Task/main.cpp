/*#include <iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
/*
int main()
{   int i;
    char a[101];
    cin>>a;
    int ln=strlen(a);
    vector<char>v(a,a+ln);
    for(i=0;i<v.size();i++)
    {
        if(v[i]=='A' || v[i]=='a'||v[i]=='O'||v[i]=='o'||v[i]=='Y'||v[i]=='y'||v[i]=='E'||v[i]=='e'||v[i]=='U'||v[i]=='u'||v[i]=='I'||v[i]=='i')
            v.erase(v.begin(),v.begin()+i);
    }
    for(i=0;i<v.size();i++)
    {
        if((v[i+1]>=97 && v[i+1]<=122) || (v[i+1]>=65 && v[i+1]<=90))
            {
               // vector<int>::iterator it=v.insert(v.begin()+i,'.');
                v.insert(v.begin()+i,'.');
            }
    }
    for(i=0;i<v.size();i++)
    {
        if(v[i]>=65 && v[i]<=90)
            v[i]+=32;
    }
    for(i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
    return 0;
}*/
#include <iostream>
#include <string>
using namespace std;

int main() {
string s,s2;
cin>>s;
int len=s.length();
for(int i=0;i<len;i++){
	if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'||s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='I'||s[i]=='U'||s[i]=='Y')
		continue;
	else
	{
		s2+='.';
		s2+=towlower(s[i]);
	}



}
cout<<s2;







	return 0;
}
