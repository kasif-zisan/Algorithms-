//Count number of subsequences when sum==k

#include<bits/stdc++.h>
using namespace std;
int sub(int arr[], int ind, int su, int s, int n){
    if(ind==n){
        if(s==su){
            return 1;
        }
        else return 0;
    }
    s+=arr[ind];
    int l = sub(arr,ind+1,su,s,n);
    s-=arr[ind];
    int r = sub(arr,ind+1,su,s,n);
    return l+r;
}
int main(){
    int arr[] = {3,1,2};
    int n = 3;
    int su = 3;
    int total= sub(arr,0,su,0,n);
    cout<<total;
}