//--------------------------BETTER SOLUTION--------------------->

string read(int n , vector<int>book , int target){
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        int a=book[i];
        int more= target-a;
        if(mpp.find(more)!=mpp.end()){
            return "YES";
            /* if we want to return index then we need to write
               return {mpp[more],i};
                  OR
                   return i;
                  */
        }
        mpp[a]=i;
    }
    return "NO";
    /* and here we need to write return {-1,-1} */
} // overall t.c = 0(n*log n)
//s.c=0(n)


//---------------OPTIMAL SOLUTION--------------->

//if we return yes or no..........
string read(int n,vector<int>v,int target)
{
    int left=0,right=n-1;
    sort(v.begin(),v.end());          //t.c=o(nlogn)
    while(left<right){
        int sum=v[left]+v[right];
        if(sum==target) return "YES";
        else if(sum<target) left++;
        else right--;
    }
return "NO";
}                                     //overall t.c = o(nlogn)+o(n)
                                             // s.c = o(1)

// if we want to return an index then the better approach is good
// optimal solution is not allowed