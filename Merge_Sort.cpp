#include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int a[n1], b[n2];

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            i++;
        }
        else
        {
            arr[k] = b[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}
void mergesort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}
int main()
{
    int arr[100], n, l, r, i;
    cout << "Enter the length of the array:";
    cin >> n;
    cout << "Enter the elements in the array:" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the lower bound:";
    cin >> l;
    cout << "Enter the upper bound:";
    cin >> r;
    mergesort(arr, l, r);
    cout << "The array after merge sort is:" << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}