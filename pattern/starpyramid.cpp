/*
1234554321
1234**4321
123****321
12******21
1********1
*/
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int row = 1;
    for(int i = 0; row<=n; i++){
        int num = 1;
        while(num<=n-row+1){
            cout<<num;
            num++;
        }
        int star = 2;
        while(star<=row+i)
        {
            cout<<"*";
           star++;
        }
        int col = 0;
        while(col<n-row+1){
            cout<<n-row+1-col;
            col++;
        }

        cout<<endl;
        row++;
        
    }
    return 0;
}
