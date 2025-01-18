#include <iostream>

int main() { 
    struct twoInt {
        int int1;
        int int2;
    } twoIntInstance1 = {1,2};

    std::cout << twoIntInstance1.int1 << "  " << twoIntInstance1.int2 << std::endl;

    twoInt twoIntInstance2 {3,4};

    std::cout << twoIntInstance2.int1 << "  " << twoIntInstance2.int2 << std::endl;

    // Invalid: twoInt twoIntInstance3(5,6);

    int a(100);

    std::cout << a << std::endl;

    return 0;
}
