#include <iostream>
using namespace std;

int getmax(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
void CountSort(int arr[], int n, int pos)
{
    int count[100] = {0};
    int b[100];

    for (int i = 0; i < n; i++)
    {
        count[(arr[i] / pos) % 10]++;
    }
    for (int i = 1; i < 10; i++)
    {
        count[i] += count[i - 1];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        b[--count[(arr[i] / pos) % 10]] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = b[i];
    }
}
void RadixSort(int arr[], int n)
{
    int max = getmax(arr, n);
    for (int pos = 1; max / pos > 0; pos = pos * 10)
    {
        CountSort(arr, n, pos);
    }
}
void printArray(int arr[], int n)
{
    cout << "The array after Radix sort is:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n, i;
    cout << "Enter the value of n:";
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the array:" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    RadixSort(arr, n);
    printArray(arr, n);
    return 0;
}