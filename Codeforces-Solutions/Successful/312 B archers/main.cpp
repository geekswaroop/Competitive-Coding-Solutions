#include <iostream>

using namespace std;

int main()
{
   int a,b,c,d;
   double prob;
   cin>>a>>b>>c>>d;
   prob =((1.0)*a*d/(b*d-(b-a)*(d-c)));
   cout<<prob;
    return 0;
}
