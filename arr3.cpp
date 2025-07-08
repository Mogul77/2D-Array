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
  for(int j=0;i<c;j++){
    int max=arr[0][j];
    for(int i=0;i<r;i++){
      if(max<arr[i][j]){
        max=arr[i][j];
      }
    }
    cout<<max<<endl;
  }
}