#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m;

    cin >> n >> m; 

    int count = 0;

    // for(int i = 0; i <= n; i++){
    //     for(int j = 0; j <= m; j++){
    //         if( (i*i + j == n) && (i + j*j == m)){
    //             count++;
    //         }
    //     }
    // }

    int j;

    for(int i = 0; i*i <= n; i++){
        j = n - i*i;

        if(i == m - j*j ){
            count++;
        }
    }

    cout << count << endl;

    return 0;

}