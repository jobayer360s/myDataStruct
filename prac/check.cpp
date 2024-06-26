#include<iostream>
using namespace std;

void buble(int arr[], int size , int &compare , int &exchange){
  compare = 0;
  exchange = 0;

    for(int i=0 ; i<size-1; i++)
    {
     for(int j=0 ; j<size-1; j++)
     {
      compare++;

      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
        ++exchange;
      }
    
     }
    }

     
}

void printarr(int arr[], int size){
    for(int i=0 ; i<size; i++)
    {
     cout<<arr[i]<<" ";
    }
}

int main(){
  int a[6] = {92, 82, 21, 16 , 18, 95};
  int compare , exchanges;
  buble(a, 6, compare, exchanges);
  printarr(a, 6);
  cout<<"Number of compare "<<compare<<endl;
  cout<<"Number of exchanges "<<exchanges<<endl;
return 0;
}
