#include<bits/stdc++.h>
using namespace std;

//sum of first n numbers
//parametrised way
// void sum(int i,int sumdata,int j){
//     if(i>j){
//         cout<<sumdata;
//         return;
//     } 
//     // cout<<sum<<endl;
//     sum(i+1,sumdata+i,j);
// }
// int main(){
//     sum(0,0,3);
//     return 0;
// }

//functional way
// int sum(int i ){
//     if(i==0){
//         return 0;
//     }
//     return i+sum(i-1);
// }

// int main(){
//     cout<<sum(4);
// }

//factorial of n using functional way
int factorial(int n){
    if(n==0)return 1;
    return n*factorial(n-1);
}

int main(){
    cout<<factorial(5);
}