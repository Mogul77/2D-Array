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
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i!=j && arr[i][j]!=0){
        cout<<"no";
        return 0;
      }
    }
  }
  cout<<"yes";
  return 0;
}