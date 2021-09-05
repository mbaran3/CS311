#include "delivery.h"
#include <sstream>

//Constructors for Delivery
//defaults sets everything to zero, and the name to unspecified
//The other constuctor takes in paramiters for name, quantity, month.
Delivery::Delivery(std::string product, int quantity, int month):_product(product), 
                    _quantity(quantity), _month(month), _isEmpty(false){
}
Delivery::Delivery():_product("UNSPECIFIED"), _quantity(0), _month(1), _isEmpty(true){}

//Definitioins of the overloaded opertators for class Delivery
bool operator ==(const  Delivery& lhs, const  Delivery& rhs){
    return (lhs._product == rhs._product
            && lhs._month == rhs._month
            && lhs._quantity == rhs._quantity);
}
bool operator !=(const  Delivery& lhs, const  Delivery& rhs){
    return !(lhs == rhs);
}
std::ostream & operator <<(std::ostream & str, const Delivery& obj){
    str << obj.toString();
    return str; 
}
Delivery& Delivery::operator ++(){
    ++_quantity;
}
Delivery& Delivery::operator ++(int dummy){
    auto save = *this;
    ++*this;
    return save;
}
Delivery& Delivery::operator--(){
    --_quantity;
}
Delivery& Delivery::operator --(int dummy){
    auto save = *this;
    --*this;
    return save;
}

//Definitoins for get, methods for class Delivery
std::string Delivery::getName()const{
    return _product;
}
int Delivery::getQuantity()const{
    return _quantity;
}
int Delivery::getMonth()const{
    return _month;
}

//Definitions for set, methods for class Delivery
void Delivery::setName(std::string newProduct){
    _product = newProduct;
}
void Delivery::setQuantity(int newQuantity){
    _quantity = newQuantity;
}
void Delivery::setMonth(int newMonth){
    _month = newMonth;
}


//Bool to check if the Delivery is empty
bool Delivery::empty()const{
    return _isEmpty;
}


//Prints string "Example, (amount) month"
std::string Delivery::toString()const{
    std::string str;
    return str = _product + " (" + std::to_string(_quantity) + ") " + _months[_month-1]; 
}

