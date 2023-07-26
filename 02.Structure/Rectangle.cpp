#include<bits/stdc++.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
}; // this is a declaration of a structure.
// both are same.

// struct  Rectangle{
//     int length;
//     int breath;
// }/* r */ // this is also same;

// struct Rectangle r; //  declaration here,there will be no problem.

int main(){

    struct Rectangle r1 = {10,5}; // this is a declaration of a structure variable.

   // cout<<"Size of this array is:"<<sizeof(r1)<<endl;
   //r1.length = 13;
   //r1.breadth = 9;

    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;
}