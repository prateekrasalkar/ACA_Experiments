 Time Complexity:
 Best Case: In the best case, the key might be present at the first index. So the
best case complexity is O(1)
 Worst Case: In the worst case, the key might be present at the last index i.e.,
opposite to the end from which the search has started in the list. So the worstcase
complexity is O(N) where N is the size of the list.
 Average Case: O(N)
 Auxiliary Space: O(1) as except for the variable to iterate through the list, no other
variable is used.

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    int arr[]={4,2,5,6,1,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool found=false;
    int t=1;
    for(int i=0;i<n;i++){
        if(arr[i] == t){
            cout<<"Element at index: "<<i<<endl;
            found=true; 
            break;
        }
    }

 return 0;
}
