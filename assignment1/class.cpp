#include <string>
#include <iostream>
using namespace std;
// Create a class called Animal with name attribute
class Animal{
// Create a constructor that takes a string as a parameter
// and sets the name attribute to the value of the parameter
public:
Animal(string name) {
this->name = name;
}
string getName() {
return name;
}
void speak() {
cout << "I am an animal" << endl;
}
void print_info() {
cout << "I am an animal with name:" << name << endl;
}
private:
string name;
};
class Dog: public Animal {
public:
Dog(string name): Animal(name) {
}
void speak() {
cout << "Woof!" << endl;
}
void bark() {
cout << "Bark!" << endl;
}
};
int main() {
// Create an instance of the Animal class with the name "Pumba"
Animal pumba("Pumba");
// Print out the name of the animal
cout << pumba.getName() << endl;
Dog dog("Fido");
dog.speak();
dog.bark();
Animal*animal = new Dog("Jumbo");
animal->speak();
animal->bark(); // This will not work
free(animal);
return 0;
}
