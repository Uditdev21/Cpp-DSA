#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"enter the string";
    cin>>s;

    unordered_map<char,int> mpp;//map<char,int> mpp;
    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
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
        char num;
        cout<<"enter the charater to count";
        cin>>num;
        cout<<mpp[num]<<endl;
        }
    
}