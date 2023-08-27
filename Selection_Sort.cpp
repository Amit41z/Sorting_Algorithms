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
    for(i=0;i<(n-1);i++)
    {
        for(j=(i+1);j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
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