#include<iostream>
#include <stdlib.h>    
#include <time.h>      
#include"Rdm.h"
using namespace std;
int Selection_sort(int arr[],int size)
{
    int i,j,min,temp;
    cout<<endl<<"Array after sorted with Selection sort";
    for(i=0;i<size-1;i++)
    {
        cout<<endl;
        min=i;
        for(j=i+1;j<size;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
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
    Selection_sort(z,size);
    delete z;
    return 0;
}
