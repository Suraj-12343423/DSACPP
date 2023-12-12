#include <iostream>
#include <stack>


using namespace std;


int main(){
	
	stack<int> s;
	
	s.push(2);
	s.push(4);
	
	cout<<"After Push = "<<""<<s.top()<<endl;
	
	s.pop();
	
	cout<<"After Pop ="<<" "<<s.top()<<endl;
	
	if(s.empty()){
		cout<<"Stack is Empty"<<endl;
	}else{
		cout<<"stack is not empty"<<endl;
	}
	cout<<"Size of stack is"<<s.size()<<endl;
	
	return 0;
	
}
