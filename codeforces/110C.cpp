// 02/06/2020  @ 11:49:41
// *****************************************************************
// *****************************************************************
#include <bits/stdc++.h>
// *****************************************************************
// *****************************************************************
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fr(i,n) for(llu i=0;i<n;i++)
#define fl(j,a,b) for(llu j=a;j<=b;j++)
#define pi 3.14159265
#define mod 1e9+7
#define MID(a,b) ((a + b) >> 1)
#define MAX(a,b) ((a) > (b) ? (a): (b))
#define MIN(a,b) ((a) < (b) ? (a) :(b))
// *****************************************************************
// *****************************************************************
typedef long long unsigned int llu;
typedef long long int ll;
// *****************************************************************
// *****************************************************************
using namespace std;
// *****************************************************************
// *****************************************************************

                   // Dream it. Wish it. Do it.

                         // tannatsri //

              // Without tact you can learn nothing.

// *****************************************************************
// *****************************************************************
bool rev(int a, int b) {
    return a > b;
}
// *****************************************************************
// *****************************************************************
int main() {
    IOS;
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("C:/Users/Mr.Tanishq/Desktop/noc/input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("C:/Users/Mr.Tanishq/Desktop/noc/output.txt", "w", stdout);
    #endif
    // *****************************************************************
    // *****************************************************************
    int t = 1;
    // cin >> t;
    while(t--) {
        int n;
        cin >> n;

        int n4 = 0;
        int n7 = 0;
        int t = n;
        if(n%7 == 0) n7 = n/7;
        else {
            while(n > 0) {
                n4++;
                n -= 4;
                if(n%7 == 0){
                    n7 = n/7;
                    break;
                }
                
            }
        }
        if(n4*4 + n7*7 == t){

        fr(i, n4) cout << "4";
        fr(i, n7) cout << "7";}
        else cout << "-1";
        cout << "\n";
    }
    return 0;
}