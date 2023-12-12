#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	vector<int> v;
	
	v.push_back(3);
	
	v.push_back(5);
	
	cout<<"Capacity->"<<v.capacity()<<endl;
	
	v.push_back(5);
	cout<<"Capacity->"<<v.capacity()<<endl;
	
	v.push_back(6);
	
	cout<<"First->"<<v.front()<<endl;
	
	cout<<"Last->"<<v.back()<<endl;
}
