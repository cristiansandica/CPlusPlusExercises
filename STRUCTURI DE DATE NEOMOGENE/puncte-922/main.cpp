#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct punct
{
    int x,y;
} p;

int n,i,maxi=-1,d,k;
float rez;
int main()
{
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>p.x>>p.y;
        d=(p.x)*(p.x)+(p.y)*(p.y);
        if(d>maxi)
        {
            maxi=d;
            k=1;
        }

        else if(d==maxi)
            k++;
    }
    rez=sqrt(maxi);
    cout<<fixed<<setprecision(3)<<rez<<" "<<k;


    return 0;
}
