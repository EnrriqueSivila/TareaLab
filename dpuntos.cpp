#include <iostream>
#include <cmath>
using namespace std;


double distanciac( double x1,double x2,double y1,double y2 ){
	
	double distancia = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	return distancia;
}


int main(){
	
double x1,y1,x2,y2;
	
	cout<<"Ingrese las cordenadas de un punto: "<<endl;
	cin>>x1>>x2;
	cout<<"Ingrese las coordenadas de un segundo punto: "<<endl;	
	cin>>y1>>y2;
	
	double distancia = distanciac(x1,y1,x2,y2);
	
	cout<<"La distancia entre los dos puntos es: "<<distancia<<endl;
			
return 0;
}
