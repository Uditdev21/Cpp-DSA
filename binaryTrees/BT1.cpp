//create new binary tree

#include<bits/stdc++.h>
using namespace std;
struct BT1
{
    int data;
    struct BT1* left;
    struct BT1* right;

    BT1(int val){
        data=val;
        left=nullptr;
        right=nullptr;
    }
};


int main(){
    struct BT1* root=new BT1(1);
    root->left=new BT1(2);
    root->right=new BT1(3);
}

