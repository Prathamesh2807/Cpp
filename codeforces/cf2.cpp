#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define rep(i, a, b) for (int i = (a); i < (b); i++)

#ifdef LOCAL
#define dbg(x) cerr << #x << " = " << (x) << "\n"
#else
#define dbg(x)
#endif

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;              // remove the comment if there are many test cases
    while (t--) {
        // solve one test case here

        int n;
        cin>>n;
        int d;
        cin>>d;

        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        sort(a.begin(),a.end());
        
        //int i=0,j=1;

       // for(int i=0;i<n;i++) cout<<a[i];
/*
        
        if(n%2 != 0){
            while(j <= (n/2)){
                swap(a[n-i-1] , a[j] );
                i+=2;j+=2; 
                
            }
        }
    
        else{
            
            while(j< (n/2)){
                swap(a[n-i-1] , a[j] );
                i+=2;j+=2; 
                
            }
        
        }
*/


       // for(int i=0;i<n;i++) cout<<a[i];
        
       /* int flag=0;
        for(int i=0;i<n-1;i+=2) {
            if(abs ( a[i]-a[i+1]) >d ) {
                flag=1;
                cout<<"NO"<<endl;
                break;
            } 
        }
        if(!flag) cout<<"YES"<<endl; */

        

    }

    
    return 0;
}