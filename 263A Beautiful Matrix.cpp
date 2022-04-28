#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j;
    int a[5][5];
    int temp=0;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {

            cin>>a[i][j];

            if(a[i][j]==1)
            {
                if(i<2){temp = 2-i;}
                else if(i>2){temp = i-2;}
                else {temp =temp+0;}

                if(j<2){temp = temp + 2-j;}
                else if(j>2){temp = temp + j-2;}
                else {temp =temp+0;}
            }



        }
    }
    cout<<temp<<endl;


    return 0;
}


