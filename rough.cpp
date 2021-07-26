#include <iostream>
#include <stdio.h>
// #include <bits/stdc++.h>
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
// int main(){
// 	stack<int> s;
// 	s.push(12);
// 	s.push(22);
// 	cout << s.size() <<endl;
// 	cout << s.top() <<endl;
// 	s.pop();
// 	cout <<s.top();
// }
//////////////////////////////////////////////////////

// int x;
// int & fun();
// int main()
// {
//    x=100;
//    int y;
//    y=fun();
//    cout<<"1.Value of X is : "<<y<<";";
//    fun()=200;
// //    y=fun();
//    cout<<"2.Value of X is : "<<y;
//    return 0;
// }
// int & fun()
// {
//     return x;
// }
/////////////////////////////////////////
// int main(){
// 	int x = 100;
// 	int y = &x;
// 	cout <<x <<" " <<y;
// }

//////////////////////////////////
// int MakeTheNumber(int N){
// //Enter your code here
// for(int i=1;i<=N;i++){
//     int count = 0;
//     for(int j=1;j<=i;j++){
//         if(i%j == 0){
//             cout <<j <<" ";
//             count++;
//         }
//     }
//     cout <<endl;
//     if(count == N){
//         return i;
//     }
// }
// return 0;
// }

// int main(){
// cout<<endl << MakeTheNumber(5);
// return 0;
// }

/////////////////////////////////////////////////////////////////////////////

int counter = 0;

bool isSafe(int x, int y, int arrLength, int stringSize){
  if(x >= 0 && y>= 0 && x<arrLength && y < stringSize){
    return true;
  }
  return false;
}

bool ratinMaze(string strArr[],int x, int y, int arrLength, int stringSize, bool furtherMore){
  if(isSafe(x, y, arrLength, stringSize)){
      cout <<x <<" " <<y <<endl; 
    bool fornextfurtherMore = true;
    if(strArr[x][y] == '1'){
      if((x == (arrLength-1)) && (y == (stringSize-1))){
        if(furtherMore){
          return true;
        } else {
          counter ++;
          return false;
        }
      }
    } else {
        fornextfurtherMore = false;
        if(furtherMore == false){
          return false;
        }
    }
    if(ratinMaze(strArr, x+1, y, arrLength, stringSize, fornextfurtherMore)){
      return true;
    }
    if(ratinMaze(strArr, x, y+1, arrLength, stringSize, fornextfurtherMore)){
      return true;
    }
    if(ratinMaze(strArr, x-1, y, arrLength, stringSize, fornextfurtherMore)){
      return true;
    }
    if(ratinMaze(strArr, x, y-1, arrLength, stringSize, fornextfurtherMore)){
      return true;
    }
  }
  return false;
}

void MatrixChallenge(string strArr[], int arrLength) {
  // code goes here
  string s = strArr[0];
  if(ratinMaze(strArr, 0, 0, arrLength, s.size(), true)){
    cout <<"true";
  } else if(counter > 0){
    cout <<counter;
  } else {
    cout <<"not possible";
  }

}

int main(void) { 
   
  // keep this function call here
  string A[] = {"10000", "10000", "11111"};
  int arrLength = sizeof(A) / sizeof(*A);
  MatrixChallenge(A, arrLength);
  return 0;
    
}