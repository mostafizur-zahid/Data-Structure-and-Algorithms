#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int array[n];

    int i=0;
    while(i<n){
        cin>>array[i];
        i++;
    }
    
    int min;
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(array[min]>array[j])
            min=j;
        }
        if(min!=i){
            int temp = array[i];
            array[i] = array[min];
            array[min]=temp;
        }

    }
    for(int i=0;i<n;i++)
    cout<<array[i]<<endl;
    }
