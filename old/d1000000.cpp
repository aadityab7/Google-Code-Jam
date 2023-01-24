#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	for(int x = 1; x <= t; x++){
		int n;
		cin >> n;
		int arr[n];
		
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		sort(arr, arr + n);

		int num = 1;
		
		int i = 0;
		while(i < n){
			if(arr[i] >= num){
				num++;
			}
			i++;
		}
		cout << "Case #" << x << ": "<< num - 1<< endl;  
	}
	return 0;
}