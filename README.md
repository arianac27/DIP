# DIP
Ejemplo de principio de inversión de dependencias.
1. ¿Qué es?
Este principio nos dice que las clases de alto nivel no dependen de las de bajo nivel. Ambos deben depender de clases abstractas o interfaces.
2. Implementación en este pequeño proyecto.
En este proyecto se creo una clase abstracta para el MetodoPago que crea el metodo pagar(). Luego las clases para el pago en tarjeta y la de pago en efectivo lo implementan a su manera pero la clase tienda utiliza el MetodoPago sin depender de un forma especifica. Todo esto permite agregar nuevos métodos de pago sin modificar la clase Tienda.
