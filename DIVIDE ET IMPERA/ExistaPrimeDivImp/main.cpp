#include <iostream>

using namespace std;

int a[201],n;

int prim(int a)
{
    int i;
    if(a<2 || (a%2==0 && a!=2))
    {
        return 0;
    }
    for(i=3; i*i<=a; i+=2)
    {
        if(a%i==0)
            return 0;
    }
    return 1;
}

int divide(int st, int dr)
{
    int r1,r2,mij;
    if(st==dr)
        return prim(a[st]);
    else
    {
        mij=(st+dr)/2;
        r1=divide(st,mij);
        r2=divide(mij+1,dr);
        if(r1==1 || r2==1)
        {
            return 1;
        }
        else
            return 0;
    }
}
int main()
{
    int n,i;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    if(divide(1,n)==0)
        cout<<"NU";
    else
        cout<<"DA";
    return 0;
}
