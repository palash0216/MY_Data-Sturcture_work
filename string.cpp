#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int t;
    char M[100000], Y[100000];
    cin >> t;
    while (t--)
    {
        cin >> M >> Y;
        int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
        for (int i = 0; i < strlen(M); i++)
        {
            if (M[i] == 0)
                c1++;
            else if (M[i] == 1)
                c2++;
        }
        for (int i = 0; i < strlen(Y); i++)
        {
            if (Y[i] == '0')
                c3++;
            else if (Y[i] == '1')
                c4++;
        }

        if (c1 >= c3 && c2 >= c4)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}