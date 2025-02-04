#include <iostream>
#include <utility>
#include <memory>

struct C {
    C() {
        std::cout << "Construct" << std::endl;
    }
    
    C (C && other) noexcept {
        std::cout << "Move" << std::endl;
    }
};

int main() {
    C c;
    std::ignore = std::move(c);
    return 0;
}