#include<iostream>
using namespace std;

void pattern(int N)
{
   
  for(int i=1; i<=N; i++)
  {
     char k='A'+N;
    for(int j=1; j<=i; j++)
    {
        cout<<k-j;
        
    }
    k--;
    cout<<endl;
  }
};

int main()
{
  int n=4;
  pattern(n);
}