//*https://codeforces.com/problemset/problem/1472/B
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    for(int i = 0; i< n; i++){
        int temp , count1 = 0 , count2 = 0;
        cin >> temp;
        for(int j = 0; j < temp; j++){
            int tempc;
            cin >> tempc;
            if(tempc == 1){
                count1++;
            }
            else{
                count2++;
            }
        }
        int sep = ((count2 * 2) + count1) / 2;
        if(count2>= sep / 2){
            count2 -= sep / 2;
            if(count2 % 2 <= count1){
            count1 -= sep % 2;
            }
            else{
                cout << "NO";
                continue;
            }
        }
        else{
            count1 -= sep - (count2 * 2);
            count2 = 0;
        }
        if(((count2 * 2) + count1) == sep){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
        cout << endl;
    }
}