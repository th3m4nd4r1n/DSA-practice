#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int k, int low){
    


         if(low>=n){

        return -1;
        }
        int mid = low + (n-low)/2;
        if (arr[mid] == k)
        {
            return mid;

        }
         if(arr[mid]<k){
            return binarySearch(arr, n, k, mid+1);
        }
         if(arr[mid]>k){
            return binarySearch(arr, mid-1, k, 0);
        }
    }
    
    



int main(int argc, char const *argv[])
{
    int arr[100];
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter elements\n";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
   
    int num;
    cout<<"Enter number to search: ";
    cin>>num;
    int ans = binarySearch(arr, n, num, 0);
    cout<<"The element "<<num<<" is at index "<<ans<<" after sorting in acsending order.\n";
    return 0;
}
