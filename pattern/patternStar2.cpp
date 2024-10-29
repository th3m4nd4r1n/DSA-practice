#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int row = 1;
    while(row<=n){
        int space = row - 1;
        while(space){
            cout << " ";
            space--;
        }
        int col = 1;
        while(col<=n-row+1){
            cout<<"*";
            col++;

        }
        row++;
        cout<<endl;
    }
    return 0;
}
