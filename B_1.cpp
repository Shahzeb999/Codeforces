#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<float> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    float average = 0.0000000000;

    for(int i = 0; i < n; i++){

        average += a[i] / float(n);  
        
    }

    printf("%.6f", average);

}
