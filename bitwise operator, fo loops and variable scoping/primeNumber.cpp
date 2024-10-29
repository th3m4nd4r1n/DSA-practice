#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int flag;
    if (n==2){
        cout<<"Prime number"<<endl;
    }
    else if (n==1){
        cout<<"neither prime nor composite";
    }
    else{
    for(int i=2; i<n; i++){
        if (n%i == 0)

        {
                flag = 0;
                break;
        }
       else {
        flag = 1;
       } 
    }}
    if (flag==0)
    {
        cout<<"Not a prime number";
    }
    else if (flag==1)
    {
        cout<<"Prime number";
    }
    
    
    return 0;
}
