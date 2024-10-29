#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int num1 = 0;
    int num2 = 1;
    int sum = 0;
    switch (n)
    {
    case 1:
        cout<<endl<<"0"<<endl;
        break;
    
    default:
    cout<<endl<<"0"<<endl<<"1"<<endl;
    
        break;
    }

    for (int i = 2; i < n; i++)
    {
        sum = num1+num2;
        num1 = num2;
        num2=sum;  
    cout<<sum<<endl;
    }
    
    return 0;
}
