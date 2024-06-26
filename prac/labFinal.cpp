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

void print(int arr[] , int size){
  
  for(int i=0 ; i<size; i++)
  { 
    cout<<arr[i]<<" ";
   
  }
  cout<<endl;
}

void hlTest(int arr[], int size)
{

     int highest = arr[0];
     int lowest = arr[0];
   
    for(int i=0 ; i<size; i++)
    {
       
     
     if (arr[i]> highest)
     {
       highest= arr[i]; 
     }
     
     if (arr[i]< lowest)
     {
       lowest= arr[i]; 
     }
       
    }

    cout<<"Highest is  "<<highest<<endl;
    cout<<"lowest is  "<<lowest<<endl;
}

int main(){
   int marks[10] = {77, 85, 98, 70, 88, 65, 81 , 91 , 45 , 89};
   print(marks, 10);
   buble(marks , 10);
   cout<<"Ascending order list is "<<endl;
    print(marks, 10);
hlTest(marks , 10);

return 0;
}


