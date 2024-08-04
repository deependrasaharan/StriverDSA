#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long rows;
  
  int width=1;
  
  cout<<"Enter number of rows to print: ";
  cin>>rows;

  long long temp=2*rows-1;
  for(int i=0;temp>0;i++,temp/=10)
  {
    width++;
  }
  // cout<<"width = "<<width;

  for(int i=rows;i>=1;i--)
  {
    for(int j=rows-1;j>=i;j--)
    {
      cout<<setw(width)<<' ';
    }
    for(int k=1;k<=2*i-1;k++)
    {
      cout<<setw(width)<<k;
    }
    cout<<'\n';
  }

  return 0;
}