#include<iostream>
#include<sstream>  
#include<iomanip>
using namespace std;
int main()
{
  for(int i=5;i>=1;i--)
  {
    for(int j=4;j>=i;j--)
    {
      cout<<setw(3)<<' ';
    }
    for(int k=2*i-1;k>=1;k--)
    {
      cout<<setw(3)<<k;
    }
    cout<<'\n';
  }

  return 0;
}