#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cout<<"enter the size of the array";
    cin>>size;

    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"enter array elemnt "<<i<<" ";
        cin>>arr[i];

    }

    unordered_map<int,int> mpp; //map<int,int> mpp;
    for(int i=0;i<size;i++){
        mpp[arr[i]]++;
    }
    cout<<"the map"<<endl;
    for (auto it : mpp){
        cout<<it.first <<"->"<<it.second<<endl;
    }

    int q;
    cout<<"enter how many numbers you want to count";

    cin>>q;
    while (q--)
    {
        int num;
        cout<<"enter the number to count";
        cin>>num;
        cout<<mpp[num]<<endl;
        }
    
}