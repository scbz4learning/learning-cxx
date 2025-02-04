#include <iostream>
#include <utility>
#include <vector>

int main(){
    std::vector<int> v = {2, 3, 3};
    std::cout << "v.data(): " << v.data() << std::endl;
    std::cout << "v[0]: " << v[0] << std::endl;
    v = std::move(v); // the value of 
    std::cout << "v.data(): " << v.data() << std::endl;
    std::cout << "v[0]: " << v[0] << std::endl;
}