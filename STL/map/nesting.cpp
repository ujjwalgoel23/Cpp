// samaj nhii aaya thaa

#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int,multiset<string> >marks_map;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int marks;
        string name;
        cin>>name>>marks;
        marks_map[-1*marks].insert(name);
    }
        for(auto &marks_students_pr : marks_map){
        auto &students=marks_students_pr.second;
        int marks = marks_students_pr.first;
        for(auto student:students){
            cout<<student<< " "<<-1*marks<<endl;
        }
        
    }
     return 0;
}