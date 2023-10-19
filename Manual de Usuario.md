# -MANUAL DE USUARIO-

------------


# Sistema de Gestion de Productos
![](https://github.com/Yovanygt/imagenes/blob/main/logo%20c++.jpg?raw=true)

------------


### Instrucciones

- Primero asegúrate de tener instalado el C++ en tu Computador
- El archivo tiene que estar guardado con la siguiente extensión “cpp”.
- Busca el archivo
- Abre el archivo con C++

------------


## MENU

1. Bueno el menu es algo sencillo de manejar ya que tú decides y eliges la opción que deseas.

2. como por ejemplo el no.1, esta primera opción te permite agregar un producto al documento .txt o como tu lo quieras llamar en nuestro caso se llama productos.txt
3. También tenemos a la segunda opción: la cual la seleccionas con un numero 2, te preguntaras que hace la opción numero 2 pues esta te ayuda a buscar un producto como tal, ya sea que este agregado o no. ten cuenta que, si no está agregado, no lo mostrara en la pantalla

5. la opción numero 3: nos ayuda a editar el documento .txt por si te hubieras equivocado en la primera opción.

7. la opción numero 4: esta te ayuda a cerrar el programa o como su nombre lo dice salir del programa

## MENU
![](https://github.com/Yovanygt/imagenes/blob/main/menu%20c++.jpg?raw=true)

## AGREGAR PRODUCTO

- El usuario ingresa información sobre un nuevo producto, incluyendo su código, nombre, precio, proveedor, existencia, estado (A = Aprobado, R = Reprobado), y descuento.

- Se verifica que el código del producto no exista previamente en el archivo
- "Productos.txt". Si el código ya existe, se muestra un mensaje de error, y el producto no se agrega.

- Si el código del producto es único, se añade la información del producto al archivo "**Productos.txt**" y se muestra un mensaje de confirmación.
## AGREGAR PRODUCTO
![](https://github.com/Yovanygt/imagenes/blob/main/agregar%20c++.jpg?raw=true)


## Buscar Producto

- permite que el usuario ingresa un código de producto. El programa busca el producto con el código ingresado en el archivo "**Productos.txt".**

- Si se encuentra el producto, muestra la información detallada de ese producto, incluyendo su código, nombre, precio, proveedor, existencia, estado y descuento.

- Si el producto no se encuentra, se muestra un mensaje indicando que no se encontró el producto.

## Buscar Producto
![](https://github.com/Yovanygt/imagenes/blob/main/buscar%20c++.jpg?raw=true)


## Editar Producto

- El usuario selecciona la opción 3 del menú, que es "**Editar Producto.**"

- Luego, se le solicita al usuario que ingrese el código del producto que desea
- editar.

- El programa busca el producto en el archivo "Productos.txt" utilizando el código ingresado.

- Si el producto se encuentra, se muestra la información actual de ese producto,

- incluyendo su código, nombre, precio, proveedor, existencia, estado y
- descuento.

- Luego, el programa permite al usuario editar los datos del producto, incluyendo

- el nombre, precio, proveedor, existencias, estado
- (A = Aprobado, R =Reprobado), y descuento.

- Después de que el usuario ha ingresado los nuevos datos del producto, el
- programa procede a guardar estos cambios en un archivo temporal llamado
- **"temp.txt."**

- El archivo original "Productos.txt" se reemplaza por el archivo temporal
- **"temp.txt,"** lo que efectivamente actualiza los datos del producto en el archivo original.

- Se muestra un mensaje de confirmación indicando que el producto se ha editado exitosamente.
## Editar Producto


## Cerrar programa

solo permite detener y cerrar el programa cuando el usuario elija la opción **no.4**

![](https://github.com/Yovanygt/imagenes/blob/main/cerrar%20c++.jpg?raw=true)



