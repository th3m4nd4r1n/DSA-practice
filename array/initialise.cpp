#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[20] = {0}; //initialiased all array positions with 0;
    for (int i = 0; i < 20; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int arr1[20]={20}; //does not initialise with all elements as 20, only the first one is 20 rest becomes 0
    for (int i = 0; i < 20; i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    int init = 24;
    int arr2[20]={init}; //does not initialise with all elements as 20, only the first one is 20 rest becomes 0, event with a variable
    for (int i = 0; i < 20; i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    int arr3[20];
    fill_n(arr3, 20, -24); //initialises complete array with custom value 
    for (int i = 0; i < 20; i++)
    {
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
    int arr4[20];
    fill_n(arr4, 10, -24); //initialises array with custom value uptill the 10th index then inputs garbage values 
    for (int i = 0; i < 20; i++)
    {
        cout<<arr4[i]<<" ";
    }
    
    
    
    return 0;
}
