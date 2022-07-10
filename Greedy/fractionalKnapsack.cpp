#include<bits/stdc++.h>
using namespace std;
int n;
int W;
struct item{
    int w; int v;
};
bool comp(item i1, item i2){
    double r1 = (double)i1.v/(double)i1.w;
    double r2 = (double)i2.v/(double)i2.w;
    return r1>r2;
}
void fractionalKnapsack(item arr[]){
    sort(arr,arr+n,comp);
    double finalvalue=0.0;
    for(int i=0;i<n;i++){
        if(arr[i].w<=W){
            W-=arr[i].w;
            finalvalue+=arr[i].v;
        }
        else{
            finalvalue+=arr[i].v*((double)W/(double)arr[i].w);
            break;
        }
    }
    cout<<"The maximum value we can obtain is: "<<finalvalue<<endl;
}
int main(){
    cout<<"enter the weight: "; cin>>W;
    cout<<"enter the number of objects: "; cin>>n;
    item arr[n];
    cout<<"Please input the value and weight "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i].v>>arr[i].w;
    }
    fractionalKnapsack(arr);
}