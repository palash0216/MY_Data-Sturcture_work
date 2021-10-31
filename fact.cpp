#include <iostream>
using namespace std;
int factorial(int n)
{

    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int j = 0; j < n; j++)
    {
        cin >> arr[j];
    }
    for (int i = 0; i < n; ++i)
    {
        int b = factorial(arr[i]);
        cout << b << endl;
    }

    return 0;
}