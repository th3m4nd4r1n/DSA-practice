#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int row = 1;
    while(row<=n){
        int col = 0;
        while(col<n){
            char ch = 'A' + col;
            cout<<ch<<" ";
            col++;
    }
    cout<<endl;
    row++;
    }
    
    return 0;
}
