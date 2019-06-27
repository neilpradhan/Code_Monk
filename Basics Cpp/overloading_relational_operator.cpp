#include<iostream>
#include<string>
#include <iomanip>
using namespace std;

class PhoneNumber
{	// will return an address to ostream while taking input arguments which are both address
	//  it has to be friend because we need to access it outside
	friend ostream &operator <<(ostream &,const PhoneNumber & );
	friend istream &operator>> (istream &,PhoneNumber & );

private:
	string areaCode; // 3 digit area code
	string exchange; //  3 digit exchange
	string line; // 4 digit line


}; // end class number


// firslty we can declare a friend function where ever we want so its not a
//memeber function but generally we declare it as a memeber function as accessing class 
//attributes is easier

// we will have to declare ostream outside 


//overloaded stream insertion operator cannot be declared as a memeber function 
//if we want to invoke it with cout << somePhonenumber;


ostream & operator<<(ostream & output,const PhoneNumber & number)
{	// here << does the original function and complete line will do the operator on 
	// objects of class PhoneNumber
	output << "("<<number.areaCode << ")"<<number.exchange<<"-"<<number.line;

	return output;
}



//similarly overloaded stream extraction operator cannot be member function for similar
//reasos as above inorder to use  >>


istream & operator >> (istream & input, PhoneNumber & number)
{

// we need to access both explicit class members by dot attribute cannot access anything directly
// but when we wrote the 



	input.ignore(); // skip (
	input>>setw(3)>> number.areaCode; // input area code
	input.ignore(2); //  skip ) and space
	input>>setw(3) >> number.exchange; // input exchange number
	input.ignore();// skip dash (-)
	input>>setw(4)>> number.line;// input line

	return input; //  enables cin >> a >> b >> c;


}

int main()
{
	PhoneNumber phone;

	cout<<"Enter phone number in form (123) 456-7890:"<<endl;


	cin>>phone; //invoking the overloaded operator

	cout<<"The phone number entered was: ";


	cout<<phone<<endl; // invoking the overloaded operator

}


