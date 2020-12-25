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
int nextElement(int n)
{
}

int nextGreaterElement(int n)
{

    string digits = to_string(n);
    next_permutation(digits.begin(), digits.end());
    long result = stoll(digits);
    return (result > INT_MAX || result <= n) ? -1 : result;
}

int main()
{
    int n;

    while (true)
    {
        cout << "Enter number for next permutation:";
        cin >> n;
        cout << nextGreaterElement(n) << endl;
    }

    return 0;
}
