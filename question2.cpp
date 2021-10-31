#include<iostream>
#include <stdlib.h>    
#include <time.h>      
#include"Rdm.h"
using namespace std;
void Bubble_sort(int arr[],int size)
{
    int i,j,temp;
    cout<<endl<<"Array after sorted with Bubble sort";
    for(int i=0;i<size-1;i++)
    {
        cout<<endl;
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        for(int z=0;z<size;z++)
        {
            cout<<arr[z]<<" ";
        }
    }
}
int main()
{
    int size;
    cout<<"Enter size"<<endl;
    cin>>size;
    int *z=Rdm(size);
    cout<<"Array generated with Rdm function"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<z[i]<<" ";
    }
    Bubble_sort(z,size);
    delete z;
    return 0;
}
