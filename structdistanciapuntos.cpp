#include <iostream>
#include <cmath>
using namespace std;

struct punto{
	float x;
	float y;
};

float distancia(punto punto1,punto punto2){
	float d;
	d = sqrt(pow(punto2.x-punto1.x,2)+pow(punto2.y-punto1.y,2));
return d;
}


int main(){
	
	punto punto1;
	punto punto2;
	
	cout<<"Ingrese las cordenadas de un punto: "<<endl;
	cin>>punto1.x>>punto2.x;
	cout<<"Ingrese las coordenadas de un segundo punto: "<<endl;	
	cin>>punto1.y>>punto2.y;
		
	float d = distancia(punto1, punto2);
	cout<<"La distancia entre los dos puntos es: "<<d<<endl;
			
return 0;
}
