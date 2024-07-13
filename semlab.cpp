#include <iostream>
#include <string>

int main() {
    std::string str = "Hello";
    str.erase(2, 1);
    std::cout << "After erasing characters: " << str << std::endl;
    return 0;
}
