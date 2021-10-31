#include <iostream>
using namespace std;
void SelectionSort(int arr[], int size)
{
    int min, temp;
    for (int i = 0; i < size; i++)
    {
        min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}
int main()
{
    int arr[] = {45, 65, 48, 12, 15, 96, 73, 24, 68, 95, 71, 22, 44, 15}; //or Here we can take an array from user as input
    int size = sizeof(arr) / sizeof(arr[0]);
    SelectionSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}