#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cout<<"Enter the Number Of Array:";
    cin>>n;
    
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    int left=0,right=n-1;
    int key;

    cout<<"Enter the searching Number:";
    cin>>key;

    while(left<=right) {
    int mid=(left+right)/2;

    if(array[mid]==key){
        cout<<"Found"<<endl;
        break;
        }

        else if(array[mid]>key)
        right=mid-1;

        else left=mid+1;
    }
    if(left>right)
    cout<<"Not Found"<<endl;
    
}