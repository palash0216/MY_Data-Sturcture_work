#include<iostream>
#include <stdlib.h>    
#include <time.h>      
#include"Rdm.h"
using namespace std;
int insertion_sort(int arr[],int size)
{
    int key,ind,i;
    cout<<endl<<"Array after sorted with Insertion sort";
    for(i=1;i<size;i++)
    {
        cout<<endl;
        key=arr[i];
        ind=i;
        while(arr[ind-1]>key && ind>=1)
        {
            arr[ind]=arr[ind-1];
            ind--;
        }
        arr[ind]=key;
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
    insertion_sort(z,size);
    delete z;
    return 0;
}
