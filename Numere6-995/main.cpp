#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("numere6.in");
ofstream fout("numere6.out");

int n,m,v[10],i,j,maxi,c;
int main()
{
    fin>>n>>m;
    if(n==0)
    {
        v[0]++;
    }
    else
        while(n)
        {

            c=n%10;
            n=n/10;
            v[c]++;
        }
    if(m==0)
    {
        v[0]++;
    }
    else
        while(m)
        {
            c=m%10;
            m=m/10;
            v[c]++;
        }
    for(i=9; i>=0; i--)
    {
        while(v[i]!=0)
        {
            fout<<i;
            v[i]--;
        }
    }
    return 0;
}
