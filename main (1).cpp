/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int Binarysearch(int arr[],int n, int x)
{
     int s=0;
     int e=n;
     while(s<=e)
     {
         int mid=(s+e)/2;
         if(arr[mid]==x)
         {
             return mid;
         }
         else if(arr[mid]<=x)
         {
             s=mid+1;
         }
         else
         {
           e=mid-1;  
         }
     }
     return -1;
}

int main()
{
    int n;cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin >>arr[i];
    }
    int x;
    cin>>x;
    cout<<Binarysearch(arr,n,x);
     return 0;
}
