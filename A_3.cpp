#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;

    cin>>s;

    unordered_set<int> st;

    for(auto i:s){
        st.insert(i);
    }

    if(st.size()%2 == 0){
        cout<<"CHAT WITH HER!";
    }
    else
        cout<<"IGNORE HIM!";

}