//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <unordered_map>
//#include <algorithm>
//
//using namespace std;
//
//// b <= a
//// b > 0.5a + 7
//// !(a<100<b)
//
////�߱o�G
////�߱o1.�ѩ�: �}�C�����w��o������!!!!
////�߱o2.���Ƥ������B�z!!!!
//
//class Solution {
//public:
//	int numFriendRequests(vector<int>& ages) {
//		int ans = 0;
//		sort(ages.begin(), ages.end());
//		
//		int Map[121]; memset(Map, 0, sizeof(Map));
//		//unordered_map<int, int> Map; Map.clear(); //�o�ˤ]�i�H!!
//
//		int ai, bi, sum;
//		for (ai = 0; ai < ages.size(); ai++) {
//			if (Map[ages[ai]]) {
//				ans += Map[ages[ai]]; continue;
//			}
//
//			sum = 0;
//			for(bi = 0; bi < ai; bi++) {
//				if ((ages[bi] > 0.5*ages[ai] + 7) && !(ages[ai] < 100 && ages[bi]>100)) {
//					sum++; 
//				}
//			}
//			//b==a
//			bool Same = ((ages[ai] > 0.5*ages[ai] + 7) && !(ages[ai] < 100 && ages[ai]>100));
//			if (Same) {
//				for (bi = ai + 1; bi < ages.size() && ages[ai] == ages[bi]; bi++) {
//					sum++;
//				}
//			}
//
//			Map[ages[ai]] = sum;
//			ans += sum;
//		}
//		return ans;
//	}
//}a;
//
//int main() {
//	vector<int> x = { 54,23,102,90,40,74,112,74,76,21 };
//	//vector<int> x = { 51,64,104,33,10,28,30,11,22,63,101,3,1,9,52,72,99,89,12,21,46,98,118,62,19,90,120,62,12,80,21,55,37,20,17,103,51,104,39,78,31,15,6,17,33,12,92,32,95,7,118,12,116,30,90,67,99,96,24,62,13,42,12,47,52,104,84,57,24,17,14,79,77,23,1,31,36,97,20,98,113,20,111,76,16,33,26,27,41,50,98,23,14,95,3,117,82,22,55,68,26,43,58,115,43,45,120,64,63,45,16,51,40,56,5,49,54,83,33,84,44,96,85,7,85,90,75,34,98,52,23,45,91,44,13,11,117,74,61,120,5,101,116,25,117,111,29,4,94,17,113,66,87,12,50,113,87,59,58,39,62,69,4,64,44,60,6,2,28,36,89,61,10,79,81,119,76,1,32,55,53,104,110,52,108,56,46,3,64,114,24,23,54,60,103,79,96,24,89,55,120,95,95,34,8,85,43,22,109,67,67,8,45,50,58,113,58,52,40,91,40,104,47,89,17,107,87,11,67,92,116,97,116,61,100,39,111,72,15,34,62,84,108,84,70,15,42,20,2,92,42,73,41,1,67,17,29,14,59,16,33,113,100,116,81,46,81,100,26,12,12,58,23,10,13,36,107,91,39,83,2,41,76,39,45,68,106,119,102,61,82,100,83,49,66,86,38,57,78,85,17,114,83,85,13,7,68,63,74,73,45,92,19,113,69,19,7,64,94,65,58,79,8,38,28,82,6,75,9,92,23,12,52,24,77,119,93,6,7,111,80,69,70,58,81,21,36,98,28,103,91,84,102,13,69,15,55,53,29,45,12,90,31,96,108,21,38,10,45,65,95,16,58,108,8,23,98,118,80,99,81,3,100,50,40,16,61,83,39,12,104,86,5,62,109,58,110,98,16,13,47,118,3,36,58,76,116,9,83,56,79,97,30,92,59,46,99,67,79,5,109,2,83,59,55,30,42,23,78,11,69,83,33,62,69,18,100,63,66,78,27,69,60,15,70,51,83,12,67,78,66,95,17,13,70,21,69,14,33,47,37,64,33,15,29,36,9,8,114,43,38,40,115,79,101,71,50,101,87,15,113,16,39,106,69,102,10,90,33,16,119,21,36,77,4,24,15,86,117,33};
//	cout << a.numFriendRequests(x) << endl;
//	system("pause");
//	return 0;
//}