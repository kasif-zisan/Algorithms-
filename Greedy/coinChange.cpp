#include<bits/stdc++.h>
using namespace std;
int notes[]={1,2,5,10,20,50,100,200,500,1000};
int size = sizeof(notes)/sizeof(notes[0]);
void coinChange(int n){
    sort(notes, notes+size, greater<int>());
    vector<int> r;
    for(int i=0;i<size;i++){
        while(n>=notes[i]){
            n-=notes[i];
            r.push_back(notes[i]);
        }
    }
    cout<<"the notes used were: ";
    for(int i=0;i<r.size();i++){
        cout<<r[i]<<" ";
    }
    cout<<endl;
    cout<<"the number of notes needed: "<<r.size()<<endl;
}
int main(){
    int n;
    cout<<"please enter the note: ";
    cin>>n;
    coinChange(n);
}