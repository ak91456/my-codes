#include<iostream>
using namespace std;

int binarysearch(int arr[],int search){
    int start=0,end=6,mid;
    while(start<=end){
    mid=(start+end)/2;
    if(arr[mid]==search){
        return mid;
    }

    else if(arr[mid]>search){
        end=mid;
    }
    else if(arr[mid]<search){
        start=mid;
    }
    }
    return -1;
}
int linearsearch(int arr[],int search){
    for(int i=0;i<7;i++){
        if(arr[i]==search){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int search=5;
    cout<<"by binary search : ";
    cout<<binarysearch(arr,search);
    cout<<"\nby linear search : ";
    cout<<(linearsearch(arr,search));
    return 0;
}