#include<iostream>
using namespace std;

void pattern(int N)
{
  for(int i=1; i<=N; i++)
  {
    for(char j='A'; j<'A'+i; j++)
    {
        cout<<j;
    }
    cout<<endl;
  }
};

int main()
{
  int n=4;
  pattern(n);
}