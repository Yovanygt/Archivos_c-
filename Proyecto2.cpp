#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

// Estructura para almacenar detalles de productos
struct Producto {
    string codigo;
    string nombre;
    double precio;
    string proveedor;
    int existencia;
    char estado;
    double descuento;
};
// Función para mostrar el menú y obtener la elección del usuario
int menus() {
    int x;
    cout << "     << MENU PRODUCTOS DE LA TERMINAL  >>     \n";
    cout << "  1. Agregar Producto\n";
    cout << "  2. Buscar Producto\n";
    cout << "  3. Editar Producto\n";
    cout << "  4. Salir Del Programa\n\n";
    cout << "  Elija una Opcion: ";
    cin >> x;
    return x;
}

bool verifica(const string& codigo) {
    ifstream leer("Productos.txt");
    string codigoLeido;

    while (leer >> codigoLeido) {
        if (codigoLeido == codigo) {
            cout << "Este codigo ya existe\n\n\n";
            leer.close();
            return 0;
        }
    }

    leer.close();
    return true;
}
// Función para verificar si un código de producto ya existe en el archivo
void agregar_producto(ofstream& es) {
    system("cls");
    Producto producto;
    es.open("Productos.txt", ios::out | ios::app);

    cout << "Codigo del producto: ";
    cin >> producto.codigo;
    
    if (verifica(producto.codigo)) {
        cout << "Nombre del Producto: ";
        cin >> producto.nombre;
        cout << "Precio: ";
        cin >> producto.precio;
        cout << "Proveedor: ";
        cin >> producto.proveedor;
        cout << "Existencias del producto: ";
        cin >> producto.existencia;
        cout << "Estado del Producto (A = Aprobado, R = Reprobado): ";
        cin >> producto.estado;
        cout << "Descuento del Producto:";
        cin >> producto.descuento;

        es << producto.codigo << " " << producto.nombre << " " << fixed << setprecision(2)
           << producto.precio << " " << producto.proveedor << " " << producto.existencia << " "
           << producto.estado << " " << fixed << setprecision(2) << producto.descuento << "\n";
        
        es.close();
        cout << "El producto se ha agregado exitosamente.\n";
    }



}
// // Función para buscar un producto por su código
void buscar_producto(const string& codigo){
	ifstream leer ("Productos.txt");
	Producto producto;
	bool encontrado = false;
	
	while(leer >> producto.codigo >> producto.nombre >> producto.precio >> producto.proveedor 
	>> producto.existencia >> producto.estado  >> producto.descuento){
	if( producto.codigo == codigo){
	encontrado = true;
	system("cls");
	cout <<" Producto encontrado: \n";
	cout <<"	codigo	" << producto.codigo << "\n";
	cout <<"	Nombre	" << producto.nombre << "\n";
	cout <<"	precio	" <<fixed << setprecision(2) << producto.precio << "\n";
	cout <<"	Proveedor	" 	  << producto.proveedor << "\n";
	cout <<"	Existencias	" 	  << producto.existencia << "\n";
	cout <<"	Estado	" 		  << producto.estado << "\n";
	cout <<"	Descuento		" <<fixed << setprecision(2) << producto.descuento << "\n\n\n";
	break;	
	}
				
	}	
	if (!encontrado){
		cout<<"Producto no encontrado.\n";
	}	
		leer.close();
	}
// Función para editar un producto existente no funciono
void editar_producto(const string& codigo) {
    ifstream leer("Productos.txt");
    ofstream temp("temp.txt");
    Producto producto;
    bool encontrado = false;

    while (leer >> producto.codigo >> producto.nombre >> producto.precio >> producto.proveedor
        >> producto.existencia >> producto.estado >> producto.descuento) {
        if (producto.codigo == codigo) {
            encontrado = true;
            system("cls");
            cout << "Producto encontrado:\n";
            cout << "Código: " << producto.codigo << "\n";
            cout << "Nombre: " << producto.nombre << "\n";
            cout << "Precio: " << fixed << setprecision(2) << producto.precio << "\n";
            cout << "Proveedor: " << producto.proveedor << "\n";
            cout << "Existencias: " << producto.existencia << "\n";
            cout << "Estado: " << producto.estado << "\n";
            cout << "Descuento: " << fixed << setprecision(2) << producto.descuento << "\n\n\n";

            // Ahora puedes permitir al usuario editar los datos del producto
            cout << "Ingrese los nuevos datos del producto:\n";
            cout << "Nuevo nombre: ";
            cin >> producto.nombre;
            cout << "Nuevo precio: ";
            cin >> producto.precio;
            cout << "Nuevo proveedor: ";
            cin >> producto.proveedor;
            cout << "Nuevas existencias: ";
            cin >> producto.existencia;
            cout << "Nuevo estado (A = Aprobado, R = Reprobado): ";
            cin >> producto.estado;
            cout << "Nuevo descuento: ";
            cin >> producto.descuento;

            // Escribir el producto modificado en el archivo temporal
            temp << producto.codigo << "   " << producto.nombre << "   " << fixed << setprecision(2)
                 << producto.precio << "   " << producto.proveedor << "   " << producto.existencia << "   "
                 << producto.estado << "   " << fixed << setprecision(2) << producto.descuento << "  \n";
        } else {
            // Si no es el producto a editar, copia el registro tal como está al archivo temporal
            temp << producto.codigo << "   " << producto.nombre << "   " << fixed << setprecision(2)
                 << producto.precio << "   " << producto.proveedor << "   " << producto.existencia << "   "
                 << producto.estado << "   " << fixed << setprecision(2) << producto.descuento << "  \n";
        }
    }

    leer.close();
    temp.close();

    // Reemplazar el archivo original con el archivo temporal
    remove("Productos.txt");
    rename("temp.txt", "Productos.txt");

    if (!encontrado) {
        cout << "Producto no encontrado.\n";
    } else {
        cout << "Producto editado exitosamente.\n";
    }
}




	

int main() {
    ofstream Esc; // Declarar un objeto ofstream para escribir en un archivo
    int op;			// Declarar una variable para almacenar la opción del menú
    
     // Comenzar un bucle que se ejecutará al menos una vez y luego repetidamente
    // hasta que el usuario seleccione la opción 4 (Salir del Programa)
    do {
        op = menus(); // Mostrar el menú y obtener la opción seleccionada por el usuario
        switch (op) { // Usar una estructura switch para realizar diferentes acciones según la opción
            case 1: // Si la opción es 1, agregar un producto
                cout << "Agregar un Producto\n"; // Mostrar un mensaje en la pantalla
                agregar_producto(Esc);// Llamar a la función agregar_producto pasando el objeto Esc para escribir en el archivo
                break; // Salir del switch
          	case 2:		// Si la opción es 2, buscar un producto
                cout << "Buscar Producto\n";
                string codigo;
                cout<<"Ingrese el codigo del producto";
                cin >>codigo;
                buscar_producto(codigo);
                break;  // Salir del switch      
            
        }
    } while (op != 4); // Continuar el bucle mientras la opción no sea igual a 4 (Salir del Programa)
    
    return 0; // Finalizar el programa con un código de salida 0 (éxito)
}

