#include <iostream>  // Librería para entrada y salida (cout, cin)
#include <string>    // Librería para usar cadenas de texto (string)

// Clase base (Producto)
class Product {
protected:
    // Atributos protegidos: accesibles en esta clase y en clases hijas
    std::string name;
    float price;
    float quantity;
    public:
    void solicitarDatos() {
        std::cout << "Ingrese el nombre del producto: ";
        std::cin >> name;

        std::cout << "Ingrese el precio: ";
        std::cin >> price;

        std::cout << "Ingrese la cantidad: ";
        std::cin >> quantity;
    }

    float calcularTotal() {
        return price * quantity;
    }

    void mostrarTotal() {
        std::cout << "Total sin descuento: " << calcularTotal() << std::endl;
    }
};
