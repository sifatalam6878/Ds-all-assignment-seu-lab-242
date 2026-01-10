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
#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int low, int mid, int high)
{
    int i=low, j=mid+1, k=low;
    int xxx[100];
    while(i<=mid && j<=high)
    {
        if(arr[i] < arr[j])
        {
            xxx[k] = arr[i];
            i++;
        }
        else
        {
            xxx[k] = arr[j];
            j++;
        }
        k++;
    }

    while(i<=mid)
    {
        xxx[k] = arr[i];
        i++;
        k++;
    }

    while(j<=high)
    {
        xxx[k] = arr[j];
        j++;
        k++;
    }

    for(i=low;i<k;i++)
    {
        arr[i] = xxx[i];
    }
    return;
}
void mrgesort(int arr[], int l, int r)
{
    if(l>=r)
        return;
    int mid=(l+r)/2;

    mrgesort(arr,l,mid);
    mrgesort(arr,mid+1, r);
    merge(arr,l, mid,r);
    return;
}

int main()
{
    int arr[] = {2, 1, 5, 6, 4, 3, 8, 9, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before merge sort:" << endl;
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }

    mrgesort(arr, 0, n - 1);

    cout << "\nAfter merge sort:" << endl;
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}


//output ai rokom hoba
/*
Before merge sort:
2 1 5 6 4 3 8 9 7
After merge sort:
1 2 3 4 5 6 7 8 9

       End
*/
