#include<iostream>
using namespace std;

class MyClass {
	private:
		int counter;
	public:
		void Foo(){
			cout<<"Foo"<<endl;
		}
		void Foo() const{
			cout<<"Foo const"<<endl;
		}
};

int main() {
	MyClass cc;
	MyClass ccc;
	cc.Foo();
	ccc.Foo();
}
