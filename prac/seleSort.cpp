#include<iostream>
using namespace std;

 void printArr(int arr[],  int size){
    for(int i=0 ; i<size; i++)
    {
     cout<<arr[i]<<" ";
    }
 }


 void selectSort(int arr[], int size){
 
     for(int i=0 ; i<size-1; i++)
     {
       int min_index=i;
      for(int j=i+1 ; j<size-1; j++)
        {
           if (arr[j]<arr[min_index])
           {
            min_index = j;
            swap(arr[min_index],arr[i]);
           }
            
      
            }
               }
 }

int main(){

 int arr[5]={10, 12, 19, 8, 6};
 printArr(arr, 5);
 cout<<endl;
 selectSort(arr, 5);
printArr(arr, 5);

return 0;
}