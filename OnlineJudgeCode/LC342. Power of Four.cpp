//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <unordered_map>
//#include <bitset>
//using namespace std;
//
//// Bitset with a dynamic allocating parameter Method
//template<class T> string n2s(T n){
//	bitset<sizeof(T) * CHAR_BIT> bs(n);
//	return bs.to_string();
//}
//
////Sol: . Present: AC: 7Lines/0ms/PR100
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
////class Solution {
////public:
////	bool isPowerOfFour(int n) {
////		return n > 0 && (n & (n - 1)) == 0 && (n - 1) % 3 == 0;
////	}
////};
////
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
////class Solution {
////public:
////	bool isPowerOfFour(int n) {
////		return n > 0 && (n & (n - 1)) == 0 && n % 3 == 1;
////	}
////};
////
//
//int main() {
//	//x: all solution of power of 4
//	vector<int> x = { 1,4,16,64,256,1024,4096,16384,65536,262144,1048576,4194304,16777216,67108864,268435456,1073741824 }; 
//	bitset<32>b;
//	for (auto &n : x) {
//		b = n;
//		//cout << b.to_string() << '\n';
//	}
//	//	00000000000000000000000000000001
//	//	00000000000000000000000000000100
//	//	00000000000000000000000000010000
//	//	00000000000000000000000001000000
//	//	00000000000000000000000100000000
//	//	00000000000000000000010000000000
//	//	00000000000000000001000000000000
//	//	00000000000000000100000000000000
//	//	00000000000000010000000000000000
//	//	00000000000001000000000000000000
//	//	00000000000100000000000000000000
//	//	00000000010000000000000000000000
//	//	00000001000000000000000000000000
//	//	00000100000000000000000000000000
//	//	00010000000000000000000000000000
//	//	01000000000000000000000000000000
//
//	//------------------------------------------------------//
//	for (auto &n : x) {
//		b = n - 1;
//		cout << b.to_string() << '\n';
//	}
//	//	00000000000000000000000000000000
//	//	00000000000000000000000000000011
//	//	00000000000000000000000000001111
//	//	00000000000000000000000000111111
//	//	00000000000000000000000011111111
//	//	00000000000000000000001111111111
//	//	00000000000000000000111111111111
//	//	00000000000000000011111111111111
//	//	00000000000000001111111111111111
//	//	00000000000000111111111111111111
//	//	00000000000011111111111111111111
//	//	00000000001111111111111111111111
//	//	00000000111111111111111111111111
//	//	00000011111111111111111111111111
//	//	00001111111111111111111111111111
//	//	00111111111111111111111111111111
//
//	//------------------------------------------------------//
//
//
//	//------------------------------------------------------//
//
//	//Solution az;
//
//	system("pause");
//	return 0;
//} 