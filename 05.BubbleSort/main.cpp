#include<bits/stdc++.h>
using namespace std;

void Bubble_Sort(int Arr[],int n){
    int temp;
    for(int i=0;i<n;i++){
         for(int j=0;j<n-i-1;j++){
            if(Arr[j]>Arr[j+1])
            {
            temp=Arr[j];
            Arr[j]=Arr[j+1];
            Arr[j+1]= temp;
            }
         }
         }
    for(int i=0;i<n;i++)
    cout<<Arr[i]<<endl;

}
    

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    Bubble_Sort(array, n);
}