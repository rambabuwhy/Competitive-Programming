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

//---------------------------------------------------------------------------------

vector<vector<int>> I(2, vector<int>(2));
vector<vector<int>> T(2, vector<int>(2));

vector<int> ar(2);

void matrix_multiply(vector<vector<int>> &A, vector<vector<int>> &B, int dim)
{
    vector<vector<int>> result(dim, vector<int>(dim));

    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j < dim; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < dim; k++)
            {
                int multi = A[i][k] * B[k][j];
                result[i][j] = result[i][j] + multi;
            }
        }
    }

    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j < dim; j++)
        {
            A[i][j] = result[i][j];
        }
    }
}

int getfib(int n)
{

    if (n < 2)
        return ar[n];

    //Identity Matrix
    I[0][0] = I[1][1] = 0;
    I[0][1] = I[1][0] = 1;

    //Transition Matrix
    T[0][0] = 0;
    T[0][1] = T[1][0] = T[1][1] = 1;

    //calculate T power
    n = n - 1;

    //calculate power

    while (n)
    {

        //odd
        if (n % 2)
        {
            matrix_multiply(I, T, 2);
            n--;
        }
        else
        {
            matrix_multiply(T, T, 2);
            n = n / 2;
        }
    }

    // [ f1, f2] [A,B / C, D] = [f2,f3]
    // x = Af1 + Cf2
    // y =  Cf1 + Df2
    int fn = (ar[0] * I[0][0] + ar[1] * I[1][0]);

    return fn;
}
int main()
{

    cout << "enter two fib numbers: ";
    cin >> ar[0] >> ar[1];

    int n;
    cout << "enter nth fib: ";
    cin >> n;
    n++;

    cout << n - 1 << "th fibonacci: " << getfib(n);
    return 0;
}