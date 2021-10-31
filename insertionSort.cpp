#include <iostream>
#include<ctype.h>
#include<string.h>
using namespace std;
void InsertionSort(char *p, int size)
{
    int i, j, key;
    for (i = 1; i < size; i++)
    {
        key = p[i];
        j = i;
        while (p[j - 1] < key && j >= 1)
        {
            p[j] = p[j - 1];
            j--;
        }
        p[j] = key;
    }
}
int main()
{
    int len;
    char str[]="JAYPEE UNIVERSITY OF ENGINEERING AND TECHNOLOGY";
    len=strlen(str);
    InsertionSort(str, len);
    for (int i = 0; i < len; i++)
    {
        cout << str[i] << " ";
    }
    return 0;
}