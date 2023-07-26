#include<bits/stdc++.h>
using namespace std;

int main(){
    int A[]={2,3,4,5,6};
    int *pointer;
    pointer = A;

    cout<<"Here display Address"<<endl;
    for(int x:A)
    cout<<pointer<<endl;

    cout<<"Here display value"<<endl;
    for(int x:A)
    cout<<*pointer++<<endl;
}