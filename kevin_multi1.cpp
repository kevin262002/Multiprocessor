#include<iostream>
#include<string.h>

using namespace std;

class Message{
	
	private:
		
		char Firstname[50];
	
	public:
		Message(char fn[]){
			
			strcpy(Firstname,fn);
		}
		void print(){
			
			cout<<"Cricketer Name : ";
		}
		void print(char sn[]){
			
			cout<<Firstname<<" "<<sn<<endl;
		}
};

int main(){
	
	Message obj("Virat");
	
	obj.print();
	obj.print("Kohli");
	
	return 0;
}
