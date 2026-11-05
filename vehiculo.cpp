#include <iostream>
using namespace std;
class vehiculo{
	protected:
		string numeroPlaca;
		string color;
		string marca;
		float velocimetro;
	public:
		vehiculo();
		void mostrarDatos();
		void cambiarVelocidad(float vel);
};
vehiculo::vehiculo(){
	numeroPlaca = "xxx-xxx";
	color = "Sin color";
	marca = "Sin marca";
	velocimetro = 0.0;
}
void vehiculo::mostrarDatos(){
	cout << "Numero de placa: " << numeroPlaca;
	cout << "\nColor: " << color;
	cout << "\nMarca: " << marca;
	cout << "\nVelocimetro: " << velocimetro;
}
void vehiculo::cambiarVelocidad(float vel){
	velocimetro = vel;
}
class camion : public vehiculo{
	protected:
		int carga;
	public:
		camion();
		void mostrarCamion();
		void cambiarCarga(int c);
};
camion::camion(){
	carga = 0;
}
void camion::mostrarCamion(){
	mostrarDatos();
	cout << "\nCarga: " << carga << endl;
}
void camion::cambiarCarga(int c){
	carga = c;
}
class automovil : public vehiculo {
	protected:
		int cantidadPuertas;
		int cantidadPasajeros;
	public:
		automovil();
		void mostrarAutomovil();
		void subirPasajeros(int p);
		void bajarPasajeros(int p);
};
automovil::automovil(){
	cantidadPuertas = 4;
	cantidadPasajeros = 0;
}
void automovil::mostrarAutomovil(){
	mostrarDatos();
	cout << "\nCantidad de puertas: " << cantidadPuertas;
	cout << "\nCantidad de pasajeros: " << cantidadPasajeros << endl;
}
void automovil::subirPasajeros(int p){
	cantidadPasajeros = cantidadPasajeros + p;
}
void automovil::bajarPasajeros(int p){
	cantidadPasajeros = cantidadPasajeros - p;
}
int main (){
	camion toyota;
	automovil subaru;
	toyota.mostrarCamion();
	subaru.mostrarAutomovil();
	toyota.cambiarCarga(1000);
	toyota.cambiarVelocidad(500);
	subaru.subirPasajeros(3);
	subaru.mostrarAutomovil();
	subaru.bajarPasajeros(2);
	toyota.mostrarCamion();
	subaru.mostrarAutomovil();
	return 0;
}
