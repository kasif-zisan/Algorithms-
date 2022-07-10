#include<bits/stdc++.h>
using namespace std;
void swap(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
void printArray(int arr[5]){
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}
void bubbleSort(int arr[5]){
    for(int i=0;i<5-1;i++){
        bool swapped = false;
        for(int j=1;j<5-i;j++){
                if(arr[j-1]>arr[j]){
                    swapped=true;
                    swap(&arr[j-1],&arr[j]);
                }
        }
        if(!swapped) break;
    }
    printArray(arr);
}
void selectionSort(int arr[5]){
    int c=5-1;    
    for(int i=0;i<5-1;i++){
        int mx=0,maxi=0;
        for(int j=0;j<5-i;j++){
            if(arr[j]>mx){mx=arr[j];maxi=j;}
        }
        swap(&arr[maxi],&arr[c]);
        c--;
    }
    printArray(arr);
}
void insertionSort(int arr[5]){
    for(int i=0;i<5-1;i++){
        for(int j=i+1;j>0;j--){
            if(arr[j-1]>arr[j]){
                swap(&arr[j-1],&arr[j]);
            }
        }
    }
    printArray(arr);
}
int main(){
    int arr[5] = {3,8,6,2,7};
    //bubbleSort(arr);
    //selectionSort(arr);
    //insertionSort(arr);
}