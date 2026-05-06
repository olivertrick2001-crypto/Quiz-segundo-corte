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
    // Método para solicitar los datos del producto al usuario
    void solicitarDatos() {
        std::cout << "Ingrese el nombre del producto: ";
        std::cin >> name;  // Captura el nombre (sin espacios)

        std::cout << "Ingrese el precio: ";
        std::cin >> price; // Captura el precio

        std::cout << "Ingrese la cantidad: ";
        std::cin >> quantity; // Captura la cantidad
    }

    // Método para calcular el total (precio * cantidad)
    float calcularTotal() {
        return price * quantity;
    }

    // Método para mostrar el total sin descuento
    void mostrarTotal() {
        std::cout << "Total sin descuento: " << calcularTotal() << std::endl;
    }
};