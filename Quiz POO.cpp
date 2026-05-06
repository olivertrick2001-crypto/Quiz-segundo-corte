#include <iostream>  // Librería para entrada y salida (cout, cin)
#include <string>    // Librería para usar cadenas de texto (string)

// Clase base (Producto)
class Product {
protected:
    // Atributos protegidos: accesibles en esta clase y en clases hijas
    std::string name;
    float price;
    float quantity;
    
