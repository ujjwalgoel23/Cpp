#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[20]={1,2,3,4,5};
    cout<<"size of array with datatype space : ";
    cout<<sizeof(arr)<<endl; // it works on the size that we give size either the capacity is full or not 

    //if we want to know the actual size of array in terms of element ... it can be calculate as follows->
     int overall=sizeof(arr);
     int byte=sizeof(arr[0]);
     int result=overall/byte;
     cout<<"capacity of array is: "<<result;

    return 0;
}