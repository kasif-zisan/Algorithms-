//PRint only one subsequence when sum==k and dont print the others

#include<bits/stdc++.h>
using namespace std;
bool sub(int arr[], int ind, int su, int s, int n, vector<int> &v){
    if(ind==n){
        if(s==su){
            for(auto x:v){
            cout<<x<<" ";
        }
        cout<<endl; return true;
        }
        else return false;
    }
    v.push_back(arr[ind]);
    s+=arr[ind];
    if(sub(arr,ind+1,su,s,n,v) == true) {return true;}
    v.pop_back();
    s-=arr[ind];
    if(sub(arr,ind+1,su,s,n,v)==true) {return true;}
    return false;
}
int main(){
    int arr[] = {3,1,2};
    int n = 3;
    vector<int> v;
    int su=5;
    sub(arr,0,su,0,n,v);
}