#include<iostream>

using namespace std;

int search(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i]==n)
        {
            return a[i];
            break;
        }
        
        
    }
    return -1;
     
}




int main()
{
    int arr[5]={4,2,4,33,89};
    int n=5;
    int k=3;
    
    int z=search(arr,k);

    cout<<z;
     
    
}