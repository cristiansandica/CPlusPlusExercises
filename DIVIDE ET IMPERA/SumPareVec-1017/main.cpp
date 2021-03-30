#include <iostream>

using namespace std;

int n,i,a[1001];

int divide(int a[],int st, int dr)
{
    int mij,r1,r2;
    if(st == dr)
    {
        if(a[st]%2 == 0)
            return a[st];
        else
            return 0;
    }
    else
    {
        mij=(st+dr)/2;
        r1=divide(a,st,mij);
        r2=divide(a,mij+1,dr);
        return r1+r2;
    }
}
int main()
{
    int n,a[1001];
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    cout<<divide(a,1,n);
}
