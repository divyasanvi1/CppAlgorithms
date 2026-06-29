#include<iostream>
using namespace std;

int main()
{
    for(int i=0; i<5; i++)
    { 
        char ch='A';
        for(int j=0; j<(5-i-1); j++)
        {
            cout<<" ";
        }
        int mid=(2*i+1)/2;
         for(int j=0; j<(2*i+1); j++)
        {
            cout<<ch;
            if(j<mid)
            {
                ch++;
            }
            else{
                ch--;
            }
        }
         for(int j=0; j<(5-i-1); j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}