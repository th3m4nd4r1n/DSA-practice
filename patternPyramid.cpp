//    1
//   212
//  32123

#include<bits/stdc++.h>

using namespace std;
int main(){
     int n;
     cin>>n;
     int row = 1;
     while(row<=n){
        int space = n - row;
        while (space)
        {
            cout<<" ";
            space--;
        }
        int col = 1;
        int val = 0;
        while (col<=row)
        {
        cout<<row - val;
            val++;
            col++;
        }
        
        int sec = 2;
         
        while(sec<=row){
            cout<<sec;
          sec++;
        }
        row++;
        cout<<endl;
        
     }

    return 0;
}
     