#include <iostream>
#include <string>

// Przygotuj klasę Person z polami skladowymi name oraz age.
// Przygotuj klasę do pracy z operatorem

class Person {
	std::string name;
	int age;
public:
	Person(const std::string& name, const int age): 
        name {name}, age{age} {}

	/*bool operator==(const Person& other) {
		return name == other.name && age == other.age;
	}*/

	/*bool operator!=(const Person& other) {
		return !(*this == other);
	}*/

    bool operator==(const Person& other) const = default;
    bool operator!=(const Person& other) const = default;

};

int main() {
	Person p1{ "JAN", 10 };
	Person p2{ "JAN", 10 };
	Person p3{ "JAN", 11 };
	
	std::cout << std::boolalpha;
	std::cout << (p1 == p2) << "\n";
	std::cout << (p1 != p3) << "\n";
}