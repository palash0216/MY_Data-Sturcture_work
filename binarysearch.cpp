#include <iostream>
using namespace std;
int BinarySearch(int arr[], int start, int end, int key)
{
    int mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == key)
            return 1;
        if (arr[mid] < key)
        {
            // start = mid + 1;
            return BinarySearch(arr, mid + 1, end, key);
        }
        else
        {
            // end = mid - 1;
            return BinarySearch(arr, start, mid - 1, key);
        }
    }
}
int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 25};//or Here we can take an array from user as input
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << "Enter the key you want to search\n";
    cin >> key;
    int res = BinarySearch(arr, 0, size - 1, key);
    if(res==1)
    cout<<"Element Found";
    else
    cout<<"Element Not Found";
    return 0;
}
