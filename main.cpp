/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int linersearch(int arr[],int n,int x)
{
    for( int i=0;i<n;i++)
    {
        if(arr[i]==x){
          return i;  
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
    int x;cin>>x;
    cout<<linersearch( arr,n,x)<<endl;

    return 0;
}
