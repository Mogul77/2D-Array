#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>arr[i][j];
    }
  }
  for(int i=1;i<n;i++){
    for(int j=0;j<i;j++){
      if(arr[i][j]!=0){
        cout<<"No";
        return 0;
      }
    }
  }
  cout<<"Yes";
  return 0;
}