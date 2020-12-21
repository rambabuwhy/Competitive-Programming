#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#define ll long long
#define ull unsigned long long
#define vi vector<ll>
#define pp pair<ll, ll>
#define mp make_pair
#define PI acos(-1.0)
#define all(v) v.begin(), v.end()
#define pb push_back
#define FOR(i, a, b) for (i = a; i < b; i++)
#define FREV(i, a, b) for (i = a; i >= b; i--)
#define SULL(n) scanf("%llu", &n)
#define INF 1e18
#define MOD 1000000007

using namespace std;
//------------------------------------------------------------------------------

int power(int base, int n)
{
    int result = 1;
    while (n)
    {
        if (n % 2)
        {

            result = result * base;
            n = n - 1;
        }
        else
        {
            base = base * base;
            n = n / 2;
        }
    }

    return result;
}
int main()
{

    int base, n;
    cout << "Enter base and n :";
    cin >> base >> n;

    cout << "pow(" << base << "," << n << "): " << power(base, n) << endl;
    return 0;
}
