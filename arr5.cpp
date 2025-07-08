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
  int tar=0;
  for(int i=0;i<n;i++){
    tar+=arr[i][0];
  }
  for(int i=0;i<n;i++){
    int row=0;
    for(int j=0;j<n;j++){
      row+=arr[i][j];
    }
    if(row!=tar){
      cout<<"no";
      return 0;
    }
  }
  for(int j=0;j<n;j++){
    int col=0;
    for(int i=0;i<n;i++){
      col+=arr[i][j];
    }
    if(col!=tar){
      cout<<"no";
      return 0;
    }
  }
  int diag1=0;
  for(int i=0;i<n;i++){
    diag1+=arr[i][i];
  }
  if(diag1!=tar){
    cout<<"no";
    return 0;
  }
  int diag2=0;
  for(int i=0;i<n;i++){
    diag2+=arr[i][n-i-1];
  }
  if(diag2!=tar){
    cout<<"no";
    return 0;
  }
  cout<<"yes";
  return 0;
}