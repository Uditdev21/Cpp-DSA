#include<bits/stdc++.h>
using namespace std;

//print name n times
// void name(int i,int n){
//     if(i>n)return;
//     cout<<"print n times"<<endl;
//     name(i+1,n);
// }

// int main(){
//     name(1,3);
// }

//print 1 to n
// int number=1;
// void numbers(int i){
//     if(number>i)return;
//     cout<<number<<endl;
//     number++;
//     numbers(i);
// }

// int main(){
//     numbers(10);
// }

//print n to 1
// void reverse(int n){
//     if(n<0)return;
//     cout<<n<<endl;
//     reverse(n-1);
// }
// int main(){
//     reverse(10);
// }

//print 1 to n or using print statement after the function call or by backtracking
// void valueprint(int i,int n){
//     if(i<n)return;
//     valueprint(i-1,n) ;
//     cout<<i<<endl;
// }
// int main(){
//     valueprint(10,1);
// }


//print n to 1  or using print statement after the function call or by backtracking
void valueprint(int i,int n){
    if(i>n)return;
    valueprint(i+1,n);
    cout<<i<<endl;
}
int main(){
    valueprint(1,10);
}