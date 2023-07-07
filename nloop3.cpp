#include<iostream>
using namespace std;
int main()
{
   int i,j,kp=30;
    for(i=5;i>=1;i--)
    {
        for(j=kp;j>=1;j--)
        {
                    cout<<"   ";
        }
        
        for(j=i;j>=1;j--){
            cout<<" * ";
        }
        kp++;
        cout<<"\n";
    }
}

