#include<iostream>
using namespace std;
int main(){
  int r,c;
  cin>>r>>c;
  int arr[r][c];
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cin>>arr[i][j];
    }
  }
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      if(arr[i][j]!=arr[j][i]){
        cout<<"Not Symmetric";
        return 0;
      }
    }
  }
  cout<<"Symmetric";
  return 0;
  
}