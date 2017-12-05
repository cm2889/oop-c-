#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={2,3,5,1,9,4,8,9,},i;
    for (i=0;i<8;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    sort(arr,arr+8);
    for (i=0;i<8;i++)
        cout<<arr[i]<<" ";
 return 0;
   }
