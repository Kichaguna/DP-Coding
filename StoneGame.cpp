//*https://codeforces.com/problemset/problem/1538/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int time , tmax = 0 , tmin = 101 , lmax , lmin , rmin , rmax , mind , minp;
        cin >> time;
        for(int j = 0; j < time; j++){
            int temp;
            cin >> temp;
            if(tmax < temp){
                tmax = temp;
                lmax = j + 1;
                rmax = time - j;
            }
            if(tmin > temp){
                tmin = temp;
                lmin = j + 1;
                rmin = time - j;
            }
        }
        mind = min(max(rmin , rmax) , max(lmax , lmin));
        minp = min(rmin , rmax) + min(lmax , lmin);
        cout << min(minp , mind) << endl;
    }
}