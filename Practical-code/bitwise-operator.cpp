#include <iostream>
using namespace std;

int main() {
int a,b;
cin>>a>>b;
// and operator
cout<<(a&b)<<endl;
// or operator
cout<<(a|b)<<endl;
// xor operator
cout<<(a^b)<<endl;
//bitwise operator compliment
cout<<"a = "<<(~a)<<" b= "<<(~b)<<endl;
//right shift
cout<<"a= "<<(a<<1)<<endl;
//left operator
cout<<"b= "<<(b>>1)<<endl;
	return 0;
}
