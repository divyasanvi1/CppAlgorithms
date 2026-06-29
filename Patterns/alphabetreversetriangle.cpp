#include<iostream>
using namespace std;

void pattern(int N)
{
   
  for(int i=1; i<=N; i++)
  {
     char k='A';
    for(int j=N; j>=i; j--)
    {
        cout<<k;
        k++;
    }
    cout<<endl;
  }
};

int main()
{
  int n=4;
  pattern(n);
}