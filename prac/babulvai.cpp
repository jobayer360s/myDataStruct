#include<iostream>
using namespace std;

void buble(int arr[], int size){
   for(int i=0 ; i<size-1; i++)
   {
    for(int j=0 ; j<size-1; j++)
      {
        if (arr[j]>arr[j+1])
        {
           swap(arr[j],arr[j+1]); 
        }
        
          }
             }

}


void printArr(int arr[], int size){
    for(int i=0 ; i<size; i++)
    {
     cout<<arr[i]<<" ";
    }
}


int main(){
 
 int arr[5]={10, 12, 19, 8, 6};
 printArr(arr, 5);
 cout<<endl;
 buble(arr, 5);
 printArr(arr, 5);
return 0;
}