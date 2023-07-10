#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int bsr(int arr[], int low, int high, int search)
{
    if (low <= high)
    {
        int mid = low + ((high - low) / 2);
        if (arr[mid] == search)
        {
            return mid;
        }
        if (arr[mid] < search)
        {
            return bsr(arr, mid + 1, high, search);
        }
        else
        {
            return bsr(arr, low, mid - 1, search);
        }
    }
    return -1;
}

int bsw(int arr[], int low, int high, int search)
{
    while (low <= high)
    {
        int mid = low + ((high - low) / 2);

        if (arr[mid] == search)
        {
            return mid;
        }
        else if (arr[mid] < search)
        {
            low = mid + 1;
        }
        else if (arr[mid] > search)
        {
            high = mid - 1;
        }
    }
    return -1;
}

int ls(int arr[],int n,int search){
    for(int i=0;i<n;i++){
        if(arr[i]==search){
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Input the array : \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<"the sorted array is : \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    int x;
    cout << "\nenter the element to search : ";
    cin >> x;
    cout<<"by linear search element found at : "<<ls(arr,n,x)<<endl;
    cout << "by binary search via recurrsion element found at  : " << bsr(arr, 0, n, x) << endl;
    cout << "by binary search via while loop element found at : " << bsw(arr, 0, n, x) << endl;
    return 0;
}