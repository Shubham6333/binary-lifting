#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key
 

#define INF 4e18
#define int long long
#define ll long 
#define all(x) begin(x), end(x)
#define rall(x) x.rbegin(),x.rend()
#define pb push_back
#define nline "\n"
#define ff  first
#define ss  second
#define pii pair<int,int>
int mod = 1e9 + 7;
int mod1 = 998244353;

// operator overloading
template <typename T> // cin >> vector<T>
istream& operator>>(istream& istream, vector<T>& v)
{
    for (auto& it : v)
        cin >> it;
    return istream;
}

template <typename T> // cout << vector<T>
ostream &operator<<(ostream &ostream, const vector<T> &c)
{
    for (auto &it : c)
        cout << it << " ";
    return ostream;
}

const int SEED=chrono::steady_clock::now().time_since_epoch().count();
mt19937_64 rng(SEED);
inline int rnd(int l=0,int r=INF)
{return uniform_int_distribution<int>(l,r)(rng);}

vector<int> prefix_function(string s) 
{
    int n = (int)s.length();
    vector<int> pi(n);
    for (int i = 1; i < n; i++) {
        int j = pi[i-1];
        while (j > 0 && s[i] != s[j])
            j = pi[j-1];
        if (s[i] == s[j])
            j++;
        pi[i] = j;
    }
    return pi;
}



double modpow(double x, int n)
{
    if (x == 0 && n == 0)
        return 0; // undefined case
    double res = 1;
    while (n > 0)
    {
        if (n % 2)
            res = (res * x);
        x = (x * x);
        n /= 2;
    }
    return res;
}

vector<int> fac(500001, 0);

void cal()
{
      fac[0] = 1;
      for(int i = 1; i <= 500000; i++) fac[i] = (fac[i - 1] * i) % mod;
}

int ncr(int n, int r)
{    
     if(r > n) return 0;
     int x = fac[n];
     int y = fac[n - r];
     int z = fac[r];

     y = (y * z) % mod;

     y = modpow(y, mod - 2ll);

     x = (x * y) % mod;

     return x;
}

int lcm(int a, int b)
{
     int x = (a * b) / __gcd(a, b);

     return x;
}

/*---------------------------------------------------------------------------------*/         
int t = 1;

void meta()
{
     cout <<"Case #" <<t++ <<": "; 
}




void shubham()
{  
  pair<int,int>a[26];
a['Q'-'A']={0,0};
a['W'-'A']={0,1};
a['E'-'A']={0,2};
a['R'-'A']={0,3};
a['T'-'A']={0,4};
a['Y'-'A']={0,5};
a['U'-'A']={0,6};
a['I'-'A']={0,7};
a['O'-'A']={0,8};
a['P'-'A']={0,9};
a['A'-'A']={1,0};
a['S'-'A']={1,1};
a['D'-'A']={1,2};
a['F'-'A']={1,3};
a['G'-'A']={1,4};
a['H'-'A']={1,5};
a['J'-'A']={1,6};
a['K'-'A']={1,7};
a['L'-'A']={1,8};
a['Z'-'A']={2,1};
a['X'-'A']={2,2};
a['C'-'A']={2,3};
a['V'-'A']={2,4};
a['B'-'A']={2,5};
a['N'-'A']={2,6};
a['M'-'A']={2,7};
int n=word.size();
 int ans = (word[0] == 'Q') ? 0 : abs(a['Q' - 'A'].first - a[word[0] - 'A'].first) + abs(a['Q' - 'A'].second - a[word[0] - 'A'].second);
for(int i=1;i<n;i++){
    pair<int,int>p=a[word[i] - 'A'];
    pair<int,int>p1=a[word[i-1] - 'A'];
    ans+=(abs(p.first-p1.first)+abs(p.second-p1.second));
}
return ans;

signed main(){
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
      //fast io
      ios_base::sync_with_stdio(false);
       cin.tie(NULL);
       cout << setprecision(12) << fixed;
       int tt = 1;
        cin>>tt;
       while(tt--)
      {
        shubham();
      }
 
}



