#include<bits/stdc++.h>
using namespace std;

int insertion_sort(int array[],int n){
    for(int i=0;i<n;i++){
        int store = array[i];
        int j = i- 1;
        while(j >= 0 && array[j]>store){
            array[j+1] = array[j];
            j = j - 1;
        }
        array[j+1] = store;
    }
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int result = insertion_sort(array,n);
   
}