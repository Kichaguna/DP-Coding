//*https://codeforces.com/problemset/problem/996/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int note[5] = {100 , 20 , 10 , 5 , 1} , money , count = 0;
    cin >> money;
    for(int i = 0; i < 5; i++){
        count += money / note[i];
        money %= note[i];
    }
    cout << count;
}