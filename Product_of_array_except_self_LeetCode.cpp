#include<iostream>
#include<bits/stdc++.h>

#define si set<int>
#define endl "\n"
#define pi pair<int, int>
#define um map<int ,int>
#define vvi vector<vector<int> >
#define vi vector<int>
#define pb push_back
#define eb emplace_back
#define ll long long
#define lli long long int
#define vl vector<ll>
#define all(arr) arr.begin(), arr.end()
#define mp make_pair
#define v_pair vector<pair<int, int>>
#define rep(i, a, n) for (int i = a; i < n; i++)
#define repe(i, a, n) for (int i = a; i <= n; i++)
#define repd(i, a, n) for(int i = n; i > a; i--)
#define reped(i, a, n) for(int i = n - 1; i >= a; i--)
#define feach(arr) for(auto it : arr)
#define inp ll n; cin >> n;
#define read(arr) rep(i, 0, n) cin >> arr[i]
#define print(arr) rep(i, 0, n) cout << arr[i] << " "
#define Arr arr

using namespace std;

class Solution {
	private:
		ll t;

	public:
		void test_cases() {
			cout << "Enter the number of testcases: " << endl;
			cin >> t;
			while(t--) {
				solve();
			}
		}

		void solve() {
			cout << "Enter the size of array: " << endl;
			inp;
			vi arr(n);
			cout << "Enter array elements: " << endl;
			read(Arr);
			int zerocount = 0, zeroindex = 0, product = 1;
			vector<int> result(n, 0);
			rep(i, 0, n){
				if(arr[i] == 0) {
					zerocount++;
					zeroindex = i;
				} 
				else {
					product = product * arr[i];
				}
			}
			if(zerocount > 1) {
				rep(i, 0, n){
					cout << result[i] << " ";
				}
				cout << endl;
				return;
			} 
			else if(zerocount == 1){
				result[zeroindex] = product;
			}
			else{
				rep(i, 0, n){
					result[i] = product / arr[i];
				}
			}
			rep(i, 0, n){
				cout << result[i] << " ";
			}
			cout << endl;
			return;
		}
};


int main() {
	Solution sol;
	sol.test_cases();
	return 0;
}

