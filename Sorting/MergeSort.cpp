#include<bits/stdc++.h>
using namespace std;
#define N 10
void me (int arr[], int l, int mid, int r){
    int n1 = (mid - l)+1;
    int n2 = r - mid;
    int l1[n1]; int r1[n2];
    for(int i=0;i<n1;i++) l1[i]=arr[l+i];
    for(int i=0;i<n2;i++) r1[i]=arr[mid+1+i];
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(l1[i]<r1[j]) {arr[k]=l1[i]; i++;}
        else {arr[k]=r1[j];j++;}
        k++;
    }
    while(i<n1){
        arr[k]=l1[i]; i++;
    }
    while(j<n2){
        arr[k]=r1[j]; j++;
    }

}
void MergeSort(int arr[], int l, int r){
    if(l<r){
        int mid = (l+r)/2;
        MergeSort(arr,l,mid);
        MergeSort(arr,mid+1,r);
        me(arr, l, mid, r);
    }
}
void printArray(int arr[], int n){
    cout<<"The sorted array is: ";
    for(int i=0;i<=n;i++) cout<<arr[i]<<" ";
}
int main(){
    int arr[N] = {1,0,5,3,9,2,6,8,7,4};
    int size = 9;
    MergeSort(arr,0,size);
    printArray(arr, size);
}