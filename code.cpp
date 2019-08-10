
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,p;
    cin>>x>>p;
    int sum=x;
    while(1){
        int y=x-(x*p)/100;
        if (((x*p)/100)==0){
            break;
        }
        sum=sum+y;
        x=y;
        
    }
    cout<<sum<<endl;
    

    return 0;
}
