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
