#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cout<<"Enter integer: ";
  cin>>n;
  
  for(int i=1;i<=n;i++)
  {
    for(int j=n-1;j>=i;j--)
    {
      cout<<' ';
    }
    for(int k=1;k<=2*i-1;k++)
    {
      cout<<'*';
    }
    cout<<'\n';
  }

  for(int i=n;i>=1;i--)
  {
    for(int j=n-1;j>=i;j--)
    {
      cout<<' ';
    }
    for(int k=1;k<=2*i-1;k++)
    {
      cout<<'*';
    }
    cout<<'\n';
  }

  return 0;
}