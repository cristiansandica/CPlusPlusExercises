#include <iostream>

using namespace std;

struct fractie
{
    int numa, numi;
} f1,f2;

int n,m,cn,cm;
int main()
{
    cin>>f1.numa>>f1.numi>>f2.numa>>f2.numi;
    if((float)f1.numa/f1.numi>(float)f2.numa/f2.numi){
        m=f1.numa;
        n=f1.numi;
    }
    else {
        m=f2.numa;
        n=f2.numi;
    }
    cn=n;
    cm=m;
    while(n!=m){
        if(n>m)
            n=n-m;
        else
            m=m-n;
    }
    cout<<cm/n<<" "<<cn/n;
        return 0;
}
