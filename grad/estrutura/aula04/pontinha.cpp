#include <iostream>

int main(void){
    int x = 5 ;
    int *ptr = &x;

    std::cout << "Valor de x: " << x << std::endl;
    std::cout << "Endereco de x: " << &x << std::endl;
    std::cout << "Endereco de ptr: " << &ptr << std::endl;
    std::cout << "Valor de *ptr: " << *ptr << std::endl;
    std::cout << "Endereco de *ptr: " << &*ptr << std::endl;
    std::cout << "Endereco de *ptr: " << &*ptr << std::endl;

    *ptr = 10;

    std::cout << "Valor de x: " << x << std::endl;
    std::cout << "Valor de *ptr: " << *ptr << std::endl;
}