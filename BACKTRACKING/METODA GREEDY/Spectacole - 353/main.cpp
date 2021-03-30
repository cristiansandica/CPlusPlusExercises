#include<iostream>
#include<fstream>
using namespace std;

ifstream fin("spectacole.in");
ofstream fout("spectacole.out");

int i,n,j,k,tf;
struct spectacole
{
    float oi,ot;
} v[101];
int main()
{
    fin>>n;
    for(i=1; i<=n; i++)
        fin>>v[i].oi>>v[i].ot;
    for(i=1; i<n; i++)
        for(j=i+1; j<=n; j++)
            if(v[i].ot>v[j].ot)
                swap(v[i],v[j]);
    k=1;
    tf=v[1].ot;
    for(i=2; i<=n; i++)
        if(v[i].oi>=tf)
        {
            k++;
            tf=v[i].ot;
        }
    fout<<k;
}
