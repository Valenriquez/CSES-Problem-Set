// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

// Problem: Distinct Numbers

int distinctValues (int arr[], int N){
	set<int> s(arr, arr + N);
	return s.size();
} 

int main() {
	
	int arr[] = {8, 3, 3, 3, 767}; 
	int N = sizeof(arr)/sizeof(arr[0]);
	cout << distinctValues(arr, N) << endl;

	return 0;
}