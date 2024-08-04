#include<bits/stdc++.h>
using namespace std;
int main()
{
  int rows;
  bool odd=false;
  cout<<"Enter number of rows: ";
  cin>>rows;
  if(rows%2!=0)
  {
    odd=true;
  }
  int n=rows/2;
  
  int j;
  if(odd)
  {
    j=n;
  }
  else
  {
    j=n-1;
  }

  for(int i=1;i<=n;i++)
  {
    for(j;j>=i;j--)
    {
      cout<<' ';
    }
    for(int k=1;k<=2*i-1;k++)
    {
      cout<<'*';
    }
    cout<<'\n';
  }

  if(odd)
  {
    n++;
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
}