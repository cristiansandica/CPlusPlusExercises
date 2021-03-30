#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

ifstream fin("lgmax.in");
ofstream fout("lgmax.out");

char s[256],maxi[256];
int i,n;
int main()
{
    fin>>n;
    fin.get();
    for(i=0; i<n; i++)
    {
        fin.getline(s,256);
        if(strlen(s)>strlen(maxi))
            strcpy(maxi,s);
    }
    fout<<maxi;
    return 0;
}
