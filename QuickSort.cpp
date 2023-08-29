#include<iostream>
using namespace std;

void swap(int arr[],int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int partition(int arr[],int l,int r)
{
    int pivot = arr[r];
    int i=l-1;
    for(int j=l;j<r;j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
    return i+1;
}
    /*int pivot = arr[l];               
    int start = l;
    int end = r;
    while(start < end)
    {
        while(arr[start] <= pivot)
        {
            start++;
        }
        while(arr[end]>pivot)
        {
            end--;
        }
        if(start < end)
        {
            swap(arr[start],arr[end]);
        }
    }
    swap(arr[l],arr[end]);
    return end;*/

void quicksort(int arr[],int l,int r)
{
    if(l<r)
    {
        int loc=partition(arr,l,r);
        quicksort(arr,l,loc-1);
        quicksort(arr,loc+1,r);
    }
}
int main()
{
    int n,arr[100],l,r,i;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    cout<<"Enter the elements in the array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    l=0;
    r=n-1;
    /*cout<<"Enter the lower bound of the array:"<<endl;
    cin>>l;
    cout<<"Enter the upper bound of the array:"<<endl;
    cin>>r;*/
    quicksort(arr,l,r);
    cout<<"The array after quick sort is:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}