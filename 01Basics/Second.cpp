// In this we will learn about variables,constants,datatypes.

#include <iostream>
using namespace std;

int main(){

int var1 ; // This is declaration of a variable

var1=20; // This is initialisation of that variable

int var2=25; // We can do both in a single line like this;

// once declared variables do not need to be declared and their values can be modified too.

// But if you want the value to remain same and that i should not be modified we can use const keyword

const int var3 = 60;

// Datatypes in cpp can be divided into 3 type broadly :- 
// 1. Primitve
// 2. Derived
// 3. User-Defined

// let us see a bit about primitive data types in c++

int variable1 = 25;
float balance =100.2;
double temp=234.346;
char variable2 = 'A';
string name1 = "sdfbr";
bool variable3 = false; 

// Something New :- So basically in C++ double quotes are used to enclose string whereas single quotes are used to enclose single characters.

cout<<variable2<<variable1<<name1;

}