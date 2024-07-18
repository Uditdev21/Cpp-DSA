#include<bits/stdc++.h>
using namespace std;

//for global array the size can be 10e7
//but for local array size can be 10e6 only


int main(){
    int size;
    cout<<"enter the size of array";
    cin>>size;
    vector<int> array(size);
    for(int i=0;i<size;i++){

        cout<<"enter elemnt "<<i+1<<" ";
        cin>>array[i];
    }

    int hash[13]={0};
    for(int i=0;i<size;i++){
        hash[array[i]]+=1;
    }
    

    int q;
    cout<<"enter how many numbers you want to search";
    cin>>q;
    while(q--){
        int num;
        cout<<"enter the number to count";
        cin>>num;
        cout<<hash[num]<<endl;
    }

    return 0;
}