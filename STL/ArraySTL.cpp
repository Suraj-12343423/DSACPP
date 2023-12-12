#include <iostream>
#include <array>

using namespace std;

int main(){
	
	array<int,5> a = {1,2,3,4,5};
	
	int size = a.size();
	
	for(int i=0; i<size; i++){
		cout<<a[i]<<endl;
	}
	
	cout<<"First Element="<<a.front()<<endl;
	
	cout<<"Last Element="<<a.back()<<endl;
	
	cout<<"Empty or not="<<a.empty()<<endl;
}
