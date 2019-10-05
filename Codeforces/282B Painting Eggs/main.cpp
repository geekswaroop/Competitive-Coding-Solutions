/*#include <iostream>

using namespace std;

/*int main()
{
    int i,tot=0,n,a,g;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>g;
        if(tot+a<=500)
        {
            tot+=a;
            cout<<"A";
        }
        else
        {
            tot-=g;
            cout<<"G";
        }
    }
    cout<<endl;
    return 0;
}*/
/*int main() {
    int n;
    cin >> n;
    int tot = 0;
    for(int i=0;i<n;i++) {
        int a, b;
        cin >> a >> b;
        if (tot+a <= 500) {
            tot += a;
            cout << "A";
        } else {
            tot -= b;
            cout << "G";
        }
    }
    cout << endl;
    return 0;
}*/
#include <cstdio>

int main()
{
    int n, a, g;
    scanf("%d", &n);

    int A(0);
    while (n--)
    {
        scanf("%d%d", &a, &g);
        A += a;
        if (A <= 500)
        {
            printf("A");
        }
        else
        {
            A -= 1000;
            printf("G");
        }
    }
    printf("\n");

    return 0;
}

