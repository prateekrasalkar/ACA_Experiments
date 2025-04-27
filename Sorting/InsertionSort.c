Complexity Analysis:
Time Complexity of Insertion Sort
 Best case: O(n), If the list is already sorted.
 Average case: O(n2), If the list is randomly ordered
 Worst case: O(n2), If the list is in reverse order

Space Complexity of Insertion Sort
 Auxiliary Space: O(1), Insertion sort requires O(1) additional space, making it a
space-efficient sorting algorithm


#include<iostream>
using namespace std;

int main(){
 int arr[]={5,2,4,6,1,3};
 int n=sizeof(arr)/sizeof(arr[0]);
 for(int i=0;i<n;i++){
     while(i>0 && arr[i-1]>arr[i]){
         swap(arr[i],arr[i-1]);
         i--;
     }
 }
 for(int i=0;i<n;i++){  cout<<arr[i]<<" ";  } 
 return 0;
}
