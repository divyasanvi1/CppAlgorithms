#include<iostream>
using namespace std;

int main()
{
    for(int i=1; i<=4; i++)
    { 
        for(int j=1; j<i+1; j++)
        {
            cout<<j;
        }
         for(int j=1; j<=(2*4-2*i); j++)
        {
            cout<<" ";
        }
        int k=i;
         for(int j=1; j<i+1; j++)
        {
            cout<<k;
            k--;
        }
        cout<<endl;
    }
}