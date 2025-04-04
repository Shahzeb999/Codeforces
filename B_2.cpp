#include<bits/stdc++.h>

using namespace std;

int main(){

    int twos, threes, fives, sixes;

    cin >> twos >> threes >> fives >> sixes;

    int count = 0;

    while(twos > 0 && fives > 0 && sixes > 0){

        twos--;
        fives--;
        sixes--;

        count += 256; 
    }

    while(twos > 0 && threes > 0){

        twos--;
        threes--;

        count += 32;
    }

    cout << count;

    return 0;

}