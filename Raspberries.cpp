//*https://codeforces.com/problemset/problem/1883/C
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    for(int i = 0 ; i < n; i++){
        int temp , num;
        cin >> num >> temp;
        int minc = temp;
        if(temp == 4){
            int anum[num];
            int rnum4 = 4;
            vector<int> rnum2;
            for(int j = 0; j < num; j++){
                int tinp;
                cin >> tinp;
                if(tinp % 4 == 0){
                    minc = 0;
                }
                if(minc != 0){
                    if(tinp % 2 == 0){
                        rnum2.push_back(0);
                    }
                    else{
                        rnum2.push_back(1);
                    }
                    rnum4 = min(4 - (tinp % 4) , rnum4);
                }
            }
            if(minc != 0){
                sort(rnum2.begin() , rnum2.end());
                minc = min(rnum2[0] + rnum2[1] , rnum4);
            }
        }
        else{
            for(int j = 0; j < num; j++){
                int tinp;
                cin >> tinp;
                int tempc = tinp % temp;
                if(tempc == 0){
                    minc = 0;
                }
                else if(minc != 0 && temp - tempc < minc){
                    minc = temp - tempc;
                }
            }
        }
        cout << minc << endl;
    }
}
