#include<bits/stdc++.h>
using namespace std;
void swap(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
int part(int arr[], int l, int h){
    int i = l-1;
    int p = arr[h];
    for(int j=l;j<=h-1;j++){
        if(arr[j]<p){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1],&arr[h]);
    return i+1;
}
void quicksort(int arr[], int l, int h){
    if(l<h){
        int pi = part(arr,l,h);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,h);
    }
}
void printArray(int arr[], int n){
    cout<<"The sorted array is: ";
    for(int i=0;i<=n;i++) cout<<arr[i]<<" ";
}
int main(){
    int a[10]={1,4,3,5,8,9,2,6,7};
    int n=9-1;
    quicksort(a,0,n);
    printArray(a, n);
}