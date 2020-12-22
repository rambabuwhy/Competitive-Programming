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

vector<int> prime_factors(int num)
{
    vector<int> result;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            int count = 0;
            while (num % i == 0)
            {

                result.push_back(i);

                count++;
                num = num / i;
            }
        }
    }
    if (num > 1)
        result.push_back(num);

    return result;
}

int main()
{
    int input;
    cin >> input;
    vector<int> result = prime_factors(input);
    for (int i : result)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
