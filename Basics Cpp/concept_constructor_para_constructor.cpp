#include<iostream>
#include<cstring>
using namespace std;



class String
{
private:
	char *s;
	int size;

public:
	//initilizing all functions
	//return type if applicable funcion(input type= initialization (optional))
	// 1.st function is constructor with default arguments
	String(const char *str = NULL);
	//2. parameterised constructor with input as address to const String
	String(const String&);
	//destructor
	~String(){delete [] s; }//destructor
	void print(){ cout<<s<<endl;};
	void change(const char*);
};




String::String(const String& s1)// stirng which is a func of class string constructor does not need return type
{
	size  =strlen(s1.s);
	s = new char[size+1];//allocate memory to a local variable
	strcpy(s,s1.s);// store the deep copied to the local variable

}


void String:: change(const char*str)
{
	size = strlen(str);
	s = new char[size + 1];
	strcpy(s,str);
}

int main()
{
	String str1("Neil likes summer");
	String str2 = str1;// deep copied


	str1.print();
	str2.print();


	str2.change("winter is lovely");

	str1.print();
	str2.print();
	return 0;

}


