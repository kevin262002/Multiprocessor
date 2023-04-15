#include<iostream>

using namespace std;

class Message{

	public : 
	
		void A(){
			
			cout<<"No Value Found"<<endl;
		}
		void A(int a){
			
			cout<<a<<endl;
		}
		void A(int a, int b){
			
			cout<<a+b<<endl;	
		}
		void A(int a, int b, int c){
			
			cout<<a+b+c<<endl;	
		}
};

int main(){
	
 	Message obj;
 	
 	obj.A();
 	obj.A(20);
 	obj.A(50,30);
 	obj.A(10,20,30);
	
	return 0;
}
