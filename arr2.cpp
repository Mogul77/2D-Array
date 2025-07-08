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
  if(c<=0){
    for(int i=0;i<r;i++)
    cout<<"0"<<endl;
    return 0;
  }
  for(int i=0;i<r;i++){
    int max=arr[i][0];
    for(int j=0;j<c;j++){
      if(max<arr[i][j]){
        max=arr[i][j];
      }
    }
    cout<<max<<endl;
  }
}