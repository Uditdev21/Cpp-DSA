#include <bits/stdc++.h>
using  namespace std;

// int main(){
//     string s;
//     cout<<"enter the string ";
//     cin>>s;

//     //pre-calculation
//     int hash[26]={0};
//     for (int i=0;i<s.size();i++){
//         hash[s[i]-'a']+=1;

//     }

    
//     int q;
//     cout<<"enter the how many character you want to count";
//     cin>>q;
//     while(q--){
//         cout<<"enter the character "<<q<<"to count ";
//         char c;
//         cin>>c;
//         cout<<hash[c-'a']<<endl;
//     }
// }

//for all character small or Capital

int main(){
    string s;
    cin>>s;
    int hash[1000]={0};  // int hash[257]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }

    int q;
    cout<<"enter the how many character you want to count";
    cin>>q;
    while(q--){
        cout<<"enter the character "<<q<<"to count ";
        char c;
        cin>>c;
        cout<<hash[c]<<endl;
    }
}