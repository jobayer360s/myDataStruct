#include<iostream>
using namespace std;


int main(){
int arr[5]={6, 8, 10 , 12, 15};
int first = 0;
int last = (sizeof(arr)/sizeof(arr[0]))-1;
int middle = (first + last)/2;
int value;
cout<<"\nEnter a value to search "<<endl;
cin>>value;


for(int i=0 ; i<5; i++)
{

    middle = (first+last)/2;

    if(first>last){
        cout<<" not Found ";
        break;
    }

    if (arr[middle] == value)
    {
       cout<<"Found ";
       break;
    }
    else if (arr[middle] < value)
    {
        first = middle+1;

    }
    
    else if (arr[middle] > value)
    {
        last = middle-1;
        
    }
 
}


return 0;
}