#include <iostream>
#include <vector>
using namespace std;
int findMaximum(vector<int>& arr) {
int mx = arr[0];
for (int i = 1; i < arr.size(); i++) {
if (arr[i] > mx)
mx = arr[i];
else
break;
}
return mx;
}
int main() {
vector<int> arr = {1, 2, 4, 5, 7, 8, 3};
cout << findMaximum(arr)<<endl;
return 0;
}
