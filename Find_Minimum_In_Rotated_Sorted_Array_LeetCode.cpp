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
		void test_cases(){
			cout << "Enter the number of test cases: ";
			cin >> t;
			while(t--){
				solve();
			}
		}

		void solve(){
			cout << "Enter the size of array: " << endl;
			inp;
			cout << "Enter the array elements: " << endl;
			vi arr(n);
			read(arr);
			// Method 1
			// TC = O(NlogN)
			sort(all(arr));
			cout << "The minimum element in the rotated sorted array is " << arr[0] << endl;
			
			// Method 2
			// TC = O(N)
			int minimum = arr[0];
			rep(i, 0, n){
				minimum = min(minimum, arr[i]);
			}
			cout << "The minimum element in the rotated sorted array is " << minimum << endl;
			
			// Method 3
			// TC = O(logN)
			int left = 0, right = n - 1;
			while(left < right){
				int mid = left + (right - left) / 2;
				if(arr[mid] < arr[right]){
					right = mid;
				}
				else{
					left = mid + 1;
				}
			}
			cout << "The minimum element in the rotated sorted array is " << arr[0] << endl;
		}
};


int main() {
	Solution sol;
	sol.test_cases();
	return 0;
}

