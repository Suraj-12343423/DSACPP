#include <iostream>
using namespace std;

bool search(int arr[],int size,int key){
	
	for(int i =0; i<size; i++){
		
		if(arr[i]==key){
			return 1;
		}
		
	}
	return 0;
}

int main(){
	int arr[10] = {1,2,4,5,7,8,9,80,12,34};
	
	int key;
	cin>>key;
	
	bool found = search(arr,10,key);
	
	if(found){
		cout<<"Key found"<<endl;
	}else{
		cout<<"Key Not Found"<<endl;
	}
	
}
