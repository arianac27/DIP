#include <iostream>
using namespace std;

class MetodoPago {
public:
	virtual void pago(double monto) = 0;
	virtual ~MetodoPago() {
	}
};
class PagoTarjeta : public MetodoPago {
public:
	void pago(double monto) override {
		cout<<"Pago con tarjeta: "<<monto<<endl;
	}
};
class PagoEfectivo : public MetodoPago {
public:
	void pago(double monto) override {
		cout<<"Pago en efectivo: "<<monto<<endl;
	}
};
class Tienda {
public:
	void realizarPago(MetodoPago* metodo, double monto) {
		metodo -> pago(monto);
	}
};
int main() {
	Tienda t;
	PagoTarjeta tarjeta;
	PagoEfectivo efectivo;
	
	t.realizarPago(&tarjeta, 15000);
	t.realizarPago(&efectivo, 7000);
	
	return 0;
}
