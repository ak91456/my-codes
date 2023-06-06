#include<iostream>
using namespace std;

void bubblesort(int arr[]){
    for(int i=0;i<10;i++){
        for(int j=1;j<10;j++){
            if(arr[i]<arr[j]){
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }

        }
    }
    cout<<"the sorted array by bubble sort is : ";
    for(int i=0;i<10;i++){
        cout<<arr[i]<<"\t";
    }
}

void selectionsort(int arr[]) {
    for (int i = 0; i < 10 - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < 10; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    cout << "The sorted array by selection sort is: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << "\t";
    }
}

void insertionsort(int arr[]) {
    for (int i = 1; i < 10; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    cout << "The sorted array by insertion sort is: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << "\t";
    }
}

int main(){
    int arr[10];
    cout<<"enter the array : ";
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    //bubblesort(arr);
    //insertionsort(arr);
    //selectionsort(arr);
    //merge sort(arr);
    //quicksort(arr);
    //dnfsort(arr);
    //bucketsort(arr);
    //radixsort(arr);
}