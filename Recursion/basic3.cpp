#include<bits/stdc++.h>
using namespace std;

//reverse an array
// void reversearray(int arr[],int i,int n){
//     if(i>=n/2)return;
//     swap(arr[i],arr[n-i-1]);
//     reversearray(arr,i+1,n);
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++ ) {cin>>arr[i];}
//     reversearray(arr,0,n);
//     for (int i=0;i<n;i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }

//check for palidrom
bool checkpal(string &s,int i){
    if(i>=s.size()){return true;}
    if(s[i]!=s[s.size()-i-1]){
        return false;
    }
    return checkpal(s,i+1);
}

int main(){
    string s="bob";
    cout<<checkpal(s,0);
    return 0;
}



