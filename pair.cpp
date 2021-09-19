#include "pair.h"
#include <string>
#include <sstream>
#include <iostream>


void set_first(int t) {
    first=t
};

void set_second(int t) {
    second=t
};

int get_first() {
    return first
};

int get_second() {
    return second
};

/*Подобную конструкцию увидел в интернете, мне она понравилась. Решил использовать ее тут*/
bool operator > (pair p1, pair p2){
    return (p1.first>p2.first)?(true):(  (p1.first==p2.first)?(p1.second>p2.second):(false)  );
}

bool operator < (pair p1, pair p2){
    return (p1.first<p2.first)?(true):(  (p1.first==p2.first)?(p1.second<p2.second):(false)  );
} 

bool operator == (pair p1, pair p2){
    return (p1.first==p2.first)&&(p1.second==p2.second);
} 

bool operator != (pair p1, pair p2){
    return (p1.first!=p2.first)||(p1.second!=p2.second);
}

void set_second(int t) {
    if (t!=0) second=t
};

void print(){
    std::cout<<"("<<get_first()<<"."<<get_second()<<")" ;
}

fraction(const int& f=0, const int& s=1): pair(f, s){
    if(s==0){
        std::cerr<<"divide by zero";
        second=1;
    }
}
 
