#include<iostream>
using namespace std;
int main()
{
    int n;
    
    cout<<"enter the size  of array:"<<"\n";
	cin>>n;
    
    int arr[n];
    
    cout<<"Enter the elements: "<<"\n";
    for(int i=0; i<n; i++) cin>>arr[i];
      
      
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++) { if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    cout<<"after swapping: ";
   
    for(int i=0; i<n; i++)
      cout<<arr[i]<<" ";
      
    return 0;
}
/*enter the size  of array:
5
Enter the elements:
2 0 13 10 5
after swapping: 0 2 5 10 13/*
