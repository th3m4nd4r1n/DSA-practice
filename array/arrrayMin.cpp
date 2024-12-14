#include<bits/stdc++.h>
using namespace std;

int minElement(int arr[],int n){
    int min = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[min]>arr[i])
        min = i;
    }
    return arr[min];
    
}

int main(int argc, char const *argv[])
{
   int arr[100];
   int n;
   cout<<"Enter size of array\n";
   cin>>n;
   cout<<"Enter the elements\n";
   for (int i = 0; i < n; i++)
   {
    cin>>arr[i];
   }
   int minimumElement = minElement(arr, n);
   cout<<"The minimum element is: "<<minimumElement;
   

    return 0;
}
