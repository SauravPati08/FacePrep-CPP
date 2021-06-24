#include<iostream>
using namespace std;

int main()
{
 
 int arr[100][100],sum = 0,row,col;
 cin >> row >> col;
 for(int i = 0; i < row; i++){
 
  for(int j = 0; j < col; j++){
  
   cin >> arr[i][j];
  }
 }
 for(int i = 0; i < row; i++){
 
  for(int j = 0; j < col; j++){
  
   if(i == 0 || j == 0 || i == row-1 || j == col-1){
   
    sum+=arr[i][j];
   }
  }
 }
 cout << "Sum of boundaries is " << sum << endl;
 return 0;

}
