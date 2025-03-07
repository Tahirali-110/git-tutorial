
#include <bits/stdc++.h>
using namespace std;

int kunal(int a,int b){
 if(b==0) return a;
 else return kunal(b,a%b);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<1<<" "<<n-1<<endl;
    }
}
//hi kumal
