#include <iostream>
using namespace std;

void CountSort(int arr[], int n)
{
    int count[100];
    int b[100];

    int k = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > k)
        {
            k = arr[i];
        }
    }
    for (int i = 0; i <= k; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    for (int i = 1; i <= k; i++)
    {
        count[i] += count[i - 1];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        b[--count[arr[i]]] = arr[i];
        // count[arr[i]]--;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = b[i];
    }
}
void printArray(int arr[], int n)
{
    cout << "The array after Count sort is:" << endl;
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
    CountSort(arr, n);
    printArray(arr, n);
    return 0;
}