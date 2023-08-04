#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0;
    cout<<"enter the value of n:";
    cin>>n;
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)count++;
    cout<<count<<endl;
}