#include <fstream>
#include <algorithm>
using namespace std;
ifstream fin ("sort_div.in");
ofstream fout ("sort_div.out");
struct secv
{
  int val,nrdiv,cc,pc;
} v[10000];
int nrdiv(int x)
{
    int d,nr=0;
    for (d=1; d*d<x; d++)
    {
        if (x%d==0)
            nr=nr+2;
    }
    if (d*d==x)
        nr++;
    return nr;
}
int cc(int x)
{
    if (x%9==0)
        return 9;
    else
        return x%9;
}
int pc(int x)
{
    while(x>9)
        x=x/10;
    return x;
}
int comp(secv a, secv b)
{
    if(a.nrdiv < b.nrdiv)
        return 1;
    else if(a.nrdiv == b.nrdiv && a.cc < b.cc)
        return 1;
    else if(a.nrdiv == b.nrdiv && a.cc == b.cc && a.pc < b.pc)
        return 1;
    else if(a.nrdiv == b.nrdiv && a.cc == b.cc && a.pc == b.pc && a.val < b.val)
        return 1;
    else
        return 0;
}

int n,x,i,j;
int main()
{
    fin>>n;
    for (i=0; i<n; i++)
    {
        fin>>x;
        v[i].val=x;
        v[i].nrdiv=nrdiv(x);
        v[i].pc=pc(x);
        v[i].cc=cc(x);
    }

    sort(v,v + n,comp);

    for (i=0; i<n; i++)
    {
        fout<<v[i].val<<" ";
    }
    return 0;
}
