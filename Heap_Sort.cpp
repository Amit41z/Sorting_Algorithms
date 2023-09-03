#include <iostream>
using namespace std;

int MaxHeapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = (2 * i) + 2;
    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        MaxHeapify(arr, n, largest);
    }
}
void HeapSort(int arr[], int n)
{
    for (int i = (n / 2) - 1; i >= 0; i--)
    {
        MaxHeapify(arr, n, i);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        swap(arr[0], arr[i]);
        MaxHeapify(arr, i, 0);
    }
}
int main()
{
    int arr[100], n, i;
    cout << "Enter the length of the array:" << endl;
    cin >> n;
    cout << "Enter the elements in the array:" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    HeapSort(arr, n);
    cout << "The sorted array is:" << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
    return 0;
}