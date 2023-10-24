#include<iostream>
using namespace std;
void selectionSort(int arr[])
{
	int i,j,lst;
	for(i=0;i<4;i++){
		lst=i;
		for(j=i+1;j<5;j++){
		
		if(arr[j] < arr[lst])
		lst=j;
	}
	if (lst!=i)
	swap(arr[lst],arr[i]);
	}
}
void printArr(int arr[])
{
	int i;
	for(i=0;i<5;i++){
	cout<<arr[i]<<" ";}
}
int main(){
	int arr[5];
	cout<<"enter your numbers:-"<<"\n";
	for(int i=0;i<5;i++)
	cin>>arr[i];
	selectionSort(arr);
	printArr(arr);
}
/*enter your numbers:-
2 5 10 3 8
2 3 5 8 10/*
