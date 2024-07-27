#include<bits/stdc++.h>
using namespace std;
void changeArray(int array[])
{
  array[0]+=25;
  cout<<"First element : "<<array[0]<<endl;
}

int main()
{
  int array[4]={1,2,3,4};
  cout<<"First element : "<<array[0]<<endl;
  changeArray(array);
  cout<<"First element : "<<array[0]<<endl;

  return 0;
}