#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k=200;

    while(k--)
    {
        int number , ithbit;
        cout<<"enter the number and ithbit"<<endl;
        cin>>number>>ithbit;


        int f=1;
        f=f<<ithbit;

        bool result = number & f;
        if(result == false)
        {
            cout<<"false : set bit is 0 "<<endl;
        }
        else cout<<"true : set bit is 1 "<<endl;
    }

    return 0;
}