#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int n1,n2;
  cin>>n1>>n2;
  int arr[n1][n2];
  for(int i=0;i<n1;i++){
    for(int j=0;j<n2;j++){
      cin>>arr[i][j];
    }
  }
  int max=arr[0][0];
  for(int i=0;i<n1;i++){
    for(int j=0;j<n2;j++){
      if(arr[i][j]>max)
      max=arr[i][j];
    }
  }
  cout<<"The maximum element is "<<max;
}