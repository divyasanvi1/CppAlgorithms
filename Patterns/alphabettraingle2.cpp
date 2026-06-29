#include<iostream>
using namespace std;

void pattern(int N)
{
   char k='A';
  for(int i=1; i<=N; i++)
  {
     
    for(int j=1; j<=i; j++)
    {
        cout<<k;
    }
     k++;
    cout<<endl;
  }
};

int main()
{
  int n=4;
  pattern(n);
}