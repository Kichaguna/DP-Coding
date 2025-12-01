//*https://codeforces.com/problemset/problem/702/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n , max = 1 , prev , count = 1;
    cin >> n;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        if(i == 0){
            prev = temp;
            continue;
        }
        else{
            if(temp > prev){
                count++;
            }
            else{
                count = 1;
            }
        }
        if(count > max){
            max = count;
        }
        prev = temp;
    }
    cout << max;
}