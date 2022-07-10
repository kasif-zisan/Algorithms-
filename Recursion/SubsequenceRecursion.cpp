#include<bits/stdc++.h>
using namespace std;
void sub(int arr[], int ind, int n, vector<int> &v){
    if(ind==n){
        for(auto x:v){
            cout<<x<<" ";
        }
        cout<<endl; return;
    }
    v.push_back(arr[ind]);
    sub(arr,ind+1,n,v);
    v.pop_back();
    sub(arr,ind+1,n,v);
}
int main(){
    int arr[] = {3,1,2};
    int n = 3;
    vector<int> v;
    sub(arr,0,n,v);
}