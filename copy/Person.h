#ifndef _PERSON_H
#define _PERSON_H

class Person{
public:
	Person(const char* s);
	~Person();
	void print();
//private:
	char* name;
};

#endif
