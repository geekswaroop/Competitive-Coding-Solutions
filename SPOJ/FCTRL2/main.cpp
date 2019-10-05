#include <iostream>

using namespace std;
void multiply(int *a, int &n, int no)
{
    int carry=0,i,product;
    for(i=0;i<n;i++)
    {
        product=a[i]*no+carry;
        a[i]=product%10;
        carry=product/10;

    }
    while(carry)
    {
        a[n]=carry%10;
        carry/=10;
        n++;
    }
}


void big_factorial(int number)
{
    int n=1;//denotes the index of the array upto which it is filled with digits
    int i;
    int *a= new int[1000]{0};
    a[0]=1;
    for(i=2;i<=number;i++)
    {
        multiply(a,n,i);
    }
    for(i=(n-1);i>=0;i--)
    {
        cout<<a[i];
    }
    cout<<endl;
}

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        big_factorial(n);
    }
    return 0;
}
