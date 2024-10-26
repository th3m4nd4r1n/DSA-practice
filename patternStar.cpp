#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int space = n - row;
        while (space){
            cout<<" ";  
            space --;
        }
        int col = 1;
        while(col <= row){
            cout<<"*";
            col++;
        } 
        row++;
        cout<<endl;
      
 
    }
    return 0;
}
