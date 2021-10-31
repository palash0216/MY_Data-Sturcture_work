#include <iostream>
using namespace std;
int Linearsearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return 1;
    }
    return 0;
}
int main()
{
    int arr[] = {45, 65, 48, 12, 15, 96, 73, 24, 68, 95, 71, 22, 44, 15}; //or Here we can take an array from user as input
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << "Enter the key you want to search\n";
    cin >> key;
    int res = Linearsearch(arr, size, key);
    if (res == 1)
        cout << "Element Found";
    else
        cout << "Element Not Found";
    return 0;
}