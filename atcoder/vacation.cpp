// 01/06/2020  @ 12:20:00
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
    // #ifndef ONLINE_JUDGE
    // // for getting input from input.txt
    // freopen("C:/Users/Mr.Tanishq/Desktop/noc/input.txt", "r", stdin);
    // // for writing output to output.txt
    // freopen("C:/Users/Mr.Tanishq/Desktop/noc/output.txt", "w", stdout);
    // #endif
    // *****************************************************************
    // *****************************************************************
    int t = 1;
    while(t--) {
        int n;
        cin >> n;
        ll dp[n][3];
        fr(i, n) {
            fr(j ,3) cin >> dp[i][j];
        }

        for(int i = n - 2; i > -1; i--) {
            for (int j = 0; j < 3; ++j) {
                int x = 0;
                if(j == 0) {
                    x = MAX(dp[i + 1][1], dp[i + 1][2]);

                }
                else if(j == 1) {
                    x = MAX(dp[i + 1][0], dp[i + 1][2]);
                }
                else {
                    x = MAX(dp[i + 1][0], dp[i + 1][1]);
                }
                dp[i][j] += x;
            }
        }
        cout << MAX(dp[0][1], MAX(dp[0][2], dp[0][0])) << "\n";



    }
    return 0;
}