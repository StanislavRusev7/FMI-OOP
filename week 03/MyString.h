#ifndef _MYSTRING_HPP
#define _MYSTRING_HPP

class MyString {

private:
	char* string;

public:

	MyString();
	MyString(MyString const& other);
	MyString(const char* str);
	int length() const;
	char& at(unsigned indx);
	int find(char c, unsigned startPos = 0);
	bool empty() const;
	MyString substr(unsigned pos = 0, unsigned n = 0);
	void append(const MyString& str);
	void print() const;
	~MyString();
	MyString& operator=(MyString const& other);

};

#endif

