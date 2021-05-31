#include<bits/stdc++.h>
using namespace std;


int main()
{
    int k= 200;
    while(k--)
    {
        cout<<"enter the number "<<endl;
        int number;
        int count=0;

        cin>>number;
        
        int f= 1;

        while(number>0)
        {
            bool res = number & f;
            if(res!=0)
            count++;

            number=number>>1;
        }

        cout<<"no of ones are "<<count<<endl;



    }

    return 0;
}