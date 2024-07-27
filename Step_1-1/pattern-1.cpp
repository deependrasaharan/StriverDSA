#include<iostream>
using namespace std;
int main()
{
  for(int i=0;i<5;i++)
  {
    for(int i=0;i<5;i++) //how is it working correctly when I'm using i in both loops
    {
      cout<<"*";
    }
    cout<<"\n";
  }

  return 0;
}