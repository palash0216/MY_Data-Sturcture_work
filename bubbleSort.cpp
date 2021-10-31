#include <iostream>
using namespace std;
void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n -1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int arr[] = {45, 65, 48, 12, 15, 96, 73, 24, 68, 95, 71, 22, 44, 15}; //or Here we can take an array from user as input
    int size = sizeof(arr) / sizeof(arr[0]);
    BubbleSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}