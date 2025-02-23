#include <iostream>


int main() {
int edad;
int price;
price = 100;
int child;
child = 5;
char user_choise;


std::cout << "Ingrese su edad porfavor: ";
std::cin >> edad;


if (edad <= child) {
    std::cout << "Su boleto cuesta $0";
    return 0;
}
else if (edad >= 60)
{
    double price = price*(1-30/100);
    std::cout << "el precio de su boleto es de: "<< price;
    return 0;
}

else if (edad > child)
{
    std::cout << "Eliga una opcion: "<< std::endl;
    std::cout << "(N) Normal"<< std::endl;
    std::cout << "(E) Estudiante"<< std::endl;
    std::cout << "(S) Senior" << std::endl;
    std::cin >> user_choise;
    
    if (user_choise == 'N') {
        std::cout << "El valor de su boleto es de $100";
    return 0;
    }
    else if (user_choise == 'E')
    {
        std::cout<< "el precio de su boleto es de $50";
        return 0;
    }
    else if (user_choise == 'S')
    {
        double price = price*(1-30/100);
        std::cout << "el precio de su boleto es de: "<< price;
        return 0;
    }
    else { 
        std::cout << "Dato incorrecto";
        return 0; 
    }
}

else { 
    std::cout << "Dato incorrecto";
    return 0; 
}


}