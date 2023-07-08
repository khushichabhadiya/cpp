#include<iostream>
using namespace std;
int main()
{
  int i,j,kp=20;
     for(i=1;i<=5;i++)
    {
        for(j=1;j<=kp;j++)
        {
            cout<<"  ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<" * ";
        }
        kp--;
        cout<<"\n";

    }
     for(i=4;i>=1;i--)
    {
        for(j=-1;j<=kp;j++)
        {
            cout<<"  ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<" * ";
        }
        kp++;
        cout<<"\n";

    }
}