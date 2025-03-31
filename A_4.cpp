#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    if(n %2 == 1 ){
        cout<<"-1";
        return 0;
    }

    for(int i = 0; i < n; i+=2){
        if(i == n-1){
            cout<<i+2<<" "<<i+1;
        }
        else{
            cout<<i+2<<" "<<i+1<<" ";
        }
    }

    return 0;
}
