#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

//     int maxSubarraySum(int* arr, int n){
//         int maxSum = arr[0];
//         int currentSum=0;
//         for(int i=0;i<n;i++){
//             currentSum += arr[i];
//            if(currentSum<0){
//                 currentSum = 0;
//             }
//             if(currentSum>maxSum){
//                 maxSum = currentSum;
//             }
//         }
//      return maxSum;
//     }
///////////////////////////////////////////////////////////////////
// int main() {
//     int a[5] = {1, 2, 3, -2, 5};
//     int n = 5;
//     cout << maxSubarraySum(a, n);
//     return 0;
// }
//////////////////////////////////////////////////////////////////

// int gcd(int a, int b){
// 	if(a==0){
// 		return b;
// 	}
// 	return gcd(b%a,a);
// }

// int main() {
// 	int num1, num2;
// 	cin >> num1 >>num2;										// Reading input from STDIN
// 	// cout << "Input number is " << num << endl;		// Writing output to STDOUT
// 	int gcdIs = gcd(num1,num2);
// 	int ans = 0;
// 	for(int i = 1;i < sqrt(gcdIs); i++){
// 		if(gcdIs%i == 0){

// 			if(gcdIs/i == 0){
// 				ans++;
// 			} else {
// 				ans += 2;
//             }
// 		}
// 	}
// 	cout <<ans;
// return ans;
// }
//////////////////////////////////////////////////////////////////////////
// int main(){
// 	string s = "124312412";
// 	cout <<sizeof(s) <<" " <<sizeof(s[3]) <<" " <<s.size;
// }
/////////////////////////////////////////////////////////////////////////
int main(){
	stack<int> s;
	s.push(12);
	s.push(22);
	cout << s.size() <<endl;
	cout << s.top() <<endl;
	s.pop();
	cout <<s.top();
}