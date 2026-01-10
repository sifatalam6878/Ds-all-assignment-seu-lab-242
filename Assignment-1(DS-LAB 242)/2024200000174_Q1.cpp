/*
||-------------------------------------------||
||                 Author :                  ||
||              Seefat E Rabbi                   ||
|| Dept. of Computer Science and Engineering ||
||     Southeast University (SEU), Dhaka     ||
||     Email : sifaterabbi20@gmail.com       ||
||     ID    : 2024200000174                 ||
||-------------------------------------------||
*/
#include<bits/stdc++.h>
using namespace std;

//selection sort ar function
void selectionsort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int poss = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]< arr[poss])
                poss = j;
        }
        swap(arr[i],arr[poss]);
    }
}

//insertion sort ar function
void insertionsort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int indx = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>indx)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = indx;
    }
}
// function call kore print kora
int main()
{
    int arr1[] = {15,13,18,14,12};
    int arr2[] = {15,12,18,14,11};
    //size ta ber korlam
    int n = sizeof(arr1)/sizeof(arr1[0]);
    //function call korlam
    insertionsort(arr1,n);
    selectionsort(arr2,n);

    //akn hocce print korlam

    cout << "Insertion sort : ";
    for(int i=0;i<n;i++)
    {
        cout << arr1[i] << " ";
    }

    cout << "\nSelection sort : ";
    for(int i=0;i<n;i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}
