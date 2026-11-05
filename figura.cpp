#include <iostream>
#include <cmath>
using namespace std;
class figura {
	protected:
		string color;
	public:
		figura();
};
figura::figura(){
	color = "Sin color\n";
}
class circulo : public figura{
	private:
		float radio;
	public:
		circulo();
		float calcularArea(float r);
		float calcularPerimetro(float r);
};
circulo::circulo(){
	radio = 0.0;
}
float circulo::calcularArea(float r){
	return = 3.1416 * pow (r, 2);
}
float circulo::calcularPerimetro(float r){
	return = 2 * 3.1416 * r;
}
class rectangulo : public figura{
	private:
		float base;
		float altura;
	public:
		rectangulo();
		float calcularArea(float b, float a);
};
rectangulo::rectangulo(){
	base = 0.0;
	altura = 0.0;
}
float rectangulo::calcularArea(float b, float a){
	return b * a;
}
class trian
