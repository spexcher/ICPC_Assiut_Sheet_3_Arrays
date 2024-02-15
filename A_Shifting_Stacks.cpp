#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T)
{
    cerr << ' ' << H;
    dbg_out(T...);
}
#ifdef LOCAL
#define dbg(...) cerr << "(" << #_VA_ARGS_ << "):", dbg_out(_VA_ARGS_)
#else
#define dbg(...)
#endif
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define vvb vector<vector<bool>>
#define vvc vector<vector<char>>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define vvb vector<vector<bool>>
#define vvpii vector<vector<pii>>
#define vvpll vector<vector<pll>>
#define vpii vector<pii>
#define vpll vector<pll>
#define si set<int>
#define sll set<ll>
#define sc set<char>
#define mii map<int, int>
#define mll map<ll, ll>
#define mci map<char, int>
#define mcll map<char, ll>
#define pqi priority_queue<int>
#define pqll priority_queue<ll>
#define lb lower_bound
#define ub upper_bound
#define sum(v) accumulate(all(v), 0)

/*debug */
#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif

/* FUNCTIONS */
#define f(i, s, e) for (long long int i = s; i < e; i++)
#define cf(i, s, e) for (long long int i = s; i <= e; i++)
#define rf(i, e, s) for (long long int i = e - 1; i >= s; i--)
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define ceildiv(a, b) ((a + b - 1) / b)
#define maxe(v) *max_element(v.begin(), v.end())
#define mine(v) *min_element(v.begin(), v.end())
#define getunique(v)                      \
    {                                     \
        sort(all(v));                     \
        v.erase(unique(all(v)), v.end()); \
    }
string decToBinary(int n)
{
    string s = "";
    while (n > 0)
    {
        s = to_string(n % 2) + s;
        n = n / 2;
    }
    return s;
}
ll binaryToDecimal(string n)
{
    string num = n;
    ll dec_value = 0;
    int base = 1;
    int len = num.length();
    for (int i = len - 1; i >= 0; i--)
    {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
    return dec_value;
}
/* PRINTS */
template <class T>
void print_v(vector<T> &v)
{

    for (auto x : v)
        cout << x << " ";
    cout << endl;
}

/* UTILS */
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define read(type) readInt<type>()
ll min(int a, ll b)
{
    if (a < b)
        return a;
    return b;
}
ll max(ll a, int b)
{
    if (a > b)
        return a;
    return b;
}
ll gcd(ll a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(int a, ll b) { return a / gcd(a, b) * b; }
string to_upper(string a)
{
    for (int i = 0; i < (int)a.size(); ++i)
        if (a[i] >= 'a' && a[i] <= 'z')
            a[i] -= 'a' - 'A';
    return a;
}
string to_lower(string a)
{
    for (int i = 0; i < (int)a.size(); ++i)
        if (a[i] >= 'A' && a[i] <= 'Z')
            a[i] += 'a' - 'A';
    return a;
}

#define y cout << "YES\n"
#define m cout << "-1\n"
#define n cout << "NO\n"

#define endl '\n'
#define sp << " " <<
#define pb push_back
#define MOD 1000000007
#define fora(a) for (auto u : a)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)
#define forn(i, n) for (auto i = 0; i < n; i++)
#define printv(a)             \
    {                         \
        for (auto u : a)      \
            cout << u << " "; \
        cout << endl;         \
    }
#define printm(a)                       \
    {                                   \
        for (auto u : a)                \
            cout << u.f sp u.s << endl; \
    }
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

typedef unsigned long long ull;
typedef vector<ll> vl;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<int>::iterator vit;
const double eps = 1e-9;
#define take(var) cin >> var
#define print(var) cout << var << endl
#define take_v(v, a)                  \
    vector<long long> v;              \
    for (long long i = 0; i < a; i++) \
    {                                 \
        long long x;                  \
        cin >> x;                     \
        v.push_back(x);               \
    }
const ll template_array_size = 1e6 + 585;
namespace number_theory
{
    ll gcd(ll x, ll y)
    {
        if (x == 0)
            return y;
        if (y == 0)
            return x;
        return gcd(y, x % y);
    }
    bool isprime(ll n)
    {
        if (n <= 1)
            return false;
        if (n <= 3)
            return true;

        if (n % 2 == 0 || n % 3 == 0)
            return false;

        for (ll i = 5; i * i <= n; i += 6)
            if (n % i == 0 || n % (i + 2) == 0)
                return false;

        return true;
    }

    bool prime[15000105];
    void sieve(int n)
    {
        for (ll i = 0; i <= n; i++)
            prime[i] = 1;
        for (ll p = 2; p * p <= n; p++)
        {
            if (prime[p] == true)
            {
                for (ll i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
        }
        prime[1] = prime[0] = 0;
    }

    vector<ll> primelist;
    bool _primes_generated_ = 0;

    void genprimes(int n)
    {
        _primes_generated_ = 1;
        sieve(n + 1);
        for (ll i = 2; i <= n; i++)
            if (prime[i])
                primelist.push_back(i);
    }

    vector<ll> factors(ll n)
    {
        if (!_primes_generated_)
        {
            cerr << "Call genprimes you dope" << endl;
            exit(1);
        }
        vector<ll> facs;

        for (ll i = 0; primelist[i] * primelist[i] <= n && i < primelist.size(); i++)
        {
            if (n % primelist[i] == 0)
            {
                while (n % primelist[i] == 0)
                {
                    n /= primelist[i];
                    facs.push_back(primelist[i]);
                }
            }
        }
        if (n > 1)
        {
            facs.push_back(n);
        }
        sort(facs.begin(), facs.end());
        return facs;
    }

    vector<ll> getdivs(ll n)
    {
        vector<ll> divs;
        for (ll i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                divs.push_back(i);
                divs.push_back(n / i);
            }
        }

        getunique(divs);
        return divs;
    }
}

using namespace number_theory;

void solve()
{

    int n;
    cin >> n;
    vi ans;
    if (n & 1)
    {
        ans.pb(1);
        n--;
    }
    for (int i = 0; i < 925000500; i++)
    {
        if (prime[i])
        {
            ans.pb(i);
            ans.pb(i);
            n -= 2;
        }
        if (n == 0)
            break;
    }
    print_v(ans);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        seive[15000150];
        // cout << "Case #" << t << ": ";
        solve();
    }
}