#include "Basics.hpp"

int add_multiply(int a, int b) {
    return (a + b) * b;
}

int main() {
    return BasicTask(add_multiply(1, 2));
}