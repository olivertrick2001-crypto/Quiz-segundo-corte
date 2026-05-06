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
// Clase derivada (herencia) que aplica descuento
class ProductoConDescuento : public Product {
private:
    // Atributo privado: solo accesible dentro de esta clase
    float discount;

public:
    // Método para solicitar el porcentaje de descuento
    void solicitarDescuento() {
        std::cout << "Ingrese el descuento (%): ";
        std::cin >> discount;
    }

    // Método para calcular el total con descuento aplicado
    float calcularTotalConDescuento() {
        float total = calcularTotal(); // Llama al método de la clase base
        return total - (total * discount / 100); // Aplica el descuento
    }

    // Método para mostrar el total con descuento
    void mostrarTotalConDescuento() {
        std::cout << "Total con descuento: " << calcularTotalConDescuento() << std::endl;
    }
};