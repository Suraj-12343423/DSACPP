#include<iostream>

using namespace std;

void printArray(int arr[] , int size){
	cout<<""<<endl;
	
	for(int i=0; i<size; i++){
		cout<<arr[i]<<"";
	}
}

int main(){
	
	int number[20];
	
	int second[10] = {1,2,3,4,5};
	
	printArray(second,1);
}

