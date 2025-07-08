#include<iostream>
using namespace std;
int main(){
  int r,c,sum=0;
  cin>>r>>c;
  int arr[r][c];
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cin>>arr[i][j];
      sum+=arr[i][j];
    }
  }
  cout<<"The sum of the elements in the matrix is "<<sum;
}