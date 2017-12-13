#pragma once

#include <iostream>

class Oper{

private:
	int a;
	int b;

public:
	Oper(int _a , int _b):a(_a),b(_b){
	}
	
	int add();
	
	int minus();

	int multi();

	void debug(){
		std::cout<< "a = " << a << ", b = "<< b <<std::endl;
	}

	int getA(){
		return a;
	}

	int getB(){
		return b;
	}
};

 
