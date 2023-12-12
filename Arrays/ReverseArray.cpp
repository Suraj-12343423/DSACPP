#include <iostream>

using namespace std;

void reverse(int arr[],int n){
	
	int start = 0;
	int end = n-1;
	
	while(start<=end){
		swap(arr[start],arr[end]);
		start++;
		end--;
		
	}
	
}

void printArray(int arr[],int n){
	
	for(int i; i<n; i++){
		cout << arr[i] <<"";
	}
	cout << endl;
	
}

int main(){
	
	int arr[10] = {1,3,5,6,7,6,9,0,1,3};
	
	reverse(arr,10);
	
	printArray(arr,10);
	
	return 0;
	
}
