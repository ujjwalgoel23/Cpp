#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"enter no. of element you want to insert : "<<endl;
    cin>>size;
    int element;
    vector<int>v;
    cout<<"enter element "<<endl;
    for(int i=0;i<size;i++){
        cin>>element;
      v.push_back(element);
    }

//step 1:- finding pivot element
   int pivot=-1;
   for(int i=size-2;i>=0;i--){
    if(v[i]<v[i+1]){
        pivot=i;
        break;
    }
   }
    //if not able to find pivot then return reverse of that vector
    if(pivot==-1){
        reverse(v.begin(),v.end());
    }

//step2:- finding right most element 
   for(int i=size-1;i>pivot;i--){
    if(v[i]>v[pivot]){
        swap(v[i],v[pivot]);
        break;
    }
   }
   //step3:- reverse
   reverse(v.begin()+pivot+1,v.end());

// printing the result
cout<<"next permutation is :-->";
for(int i=0;i<size;i++){
    cout<<v[i]<<" ";
}

    return 0;
}