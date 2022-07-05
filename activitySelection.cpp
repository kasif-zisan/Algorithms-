#include<bits/stdc++.h>
using namespace std;
int n;
struct activity{
    int start; int finish;
};
bool comp (activity s1, activity s2){
    return s1.finish<s2.finish;
}
void maxActivitySelection(activity arr[], int n){
    sort(arr, arr+n, comp);
    int c = 1;
    int i = 0;
    cout<<"The selected activities are: ";
    cout<<"("<<arr[i].start<<" "<<arr[i].finish<<") ";
    for(int j=1;j<n;j++){
        if(arr[i].finish<=arr[j].start){
            cout<<"("<<arr[j].start<<" "<<arr[j].finish<<") ";
            i=j;
            c++;
        }
    }
    cout<<"The total number of activities are: "<<c<<endl;
}
int main(){
    cout<<"Please input the number of activities :"; cin>>n;
    activity arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].start>>arr[i].finish;
    }
    maxActivitySelection(arr, n);
}