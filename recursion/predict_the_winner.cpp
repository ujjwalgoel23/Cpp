    #include<bits/stdc++.h>
    using namespace std;

    int winner(int person[],int n, int index,int person_left,int k){
        if(person_left==1){
        for(int i=0;i<n;i++) {
            if(person[i]==0) return i;
        }
        }
        int kill=(k-1)%person_left;
        while(kill--){
            index=(index+1)%n;
            while(person[index]==1) index=(index+1)%n;
        }
        person[index]=1;
        while(person[index]==1) index=(index+1)%n;
        return winner(person,n,index,person_left-1,k);
    }

    int main(){
        int n;
        cout<<"Enter the size of array : ";
        cin>>n;
        int person[n];
        cout<<"enter the size of array ; ";
        for(int i=0;i<n;i++)cin>>person[i];
        int k;
        cout<<"enter the value of k : ";
        cin>>k;
    int result= winner(person,n,0,n,k)+1;
    cout<<"winner is : "<<result;
        return 0;
    }