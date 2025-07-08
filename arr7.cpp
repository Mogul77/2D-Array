#include<iostream>
using namespace std;
int main(){
  int n,count=0;
  cin>>n;
  int arr[n][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>arr[i][j];
    }
  }
  int iseven=(arr[0][0]%2==0);
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if((arr[i][j]%2==0) != iseven){
        cout<<"No";
        return 0;
      }
    }
  }
  cout<<"Yes";
  return 0;
}