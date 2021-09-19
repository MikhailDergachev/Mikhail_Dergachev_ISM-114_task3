#include <iostream>
#include "pair.cpp"


int main (){

	fraction f1(2, 3);
	fraction f2(1, 2);
    
	f1.print();

	if (f1>f2){
        std::cout<<" > ";
    }else {
        std::cout<<" < ";
    }

	f2.print();
	std::cout<<std::endl;
    
	return 0;    
}