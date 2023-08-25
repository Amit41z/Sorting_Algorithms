#include<iostream>
using namespace std;
int main()
{
    int n,i,j,arr[100],temp;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    cout<<"Enter the elements in the array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"The sorted array is:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    return 0;
}