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
    for(i=1;i<n;i++)
    {
        temp=arr[i];
        j=i-1;
        while(arr[j]>temp && j>=0)
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=temp;
    }
    cout<<"The sorted array is:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    return 0;
}