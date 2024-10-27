#include <bits/stdc++.h>
using namespace std;

void pattern(int n){
    int i;
    char ch;
    for(i=0;i<=n-1;i++){
      for(ch='A';ch<='A'+i;ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    pattern(n);
    return 0;

}
