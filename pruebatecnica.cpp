
/* HackerLand University tiene la siguiente política de calificación:

Cada estudiante recibe una calificación en el rango inclusivo de 0 a 100.

Cualquier calificación inferior a 40 es una calificación reprobatoria.

Sam es profesor en la universidad y le gusta redondear la calificación de cada estudiante de acuerdo con estas reglas:

1) Si la diferencia entre la calificación y el siguiente múltiplo de 5 es menor que 3, redondee la calificación al siguiente múltiplo de 5.

2) Si el valor de la calificación es inferior a 38, no se redondea, ya que el resultado seguirá siendo una calificación reprobatoria.
*/
#include <iostream>

using namespace std;
int main() {

    char nombre[20];
	int calificacion=0, nota, cta=0, i=1, nuevanota;
	
    cout<<"\n\t\tPrograma que permite calcular la calificacion de los estudiantes\n\n ";
    cout<<"ingrese nombre del estudiante \n";
    cin>>nombre;
   do
	{system("cls");
	cout<<"ingrese la calificacion \n";
	    cin>>calificacion;
	    
	}while(calificacion<0 || calificacion>100 );
    
    if(calificacion%5==0)
    {
    	cout<<" \nla calificacion del estudiante "<<nombre<<" es "<<calificacion;
	}
	

	
	else if(calificacion>40)
				{   nota=calificacion;
				    i=1;
				    
				do
					{ 
	
						nota=calificacion+i;
						
						i++;
						cta++;
					}
				while(nota%5!=0);
					
				if(cta<3)
					{
						nuevanota=calificacion+cta;
						cout<<" \nla nueva calificacion del estudiante "<<nombre<<" es "<<nuevanota;
					}
					else
						{	cout<<" \nla calificacion del estudiante "<<nombre<<" es "<<calificacion;
						}	
				}

else {
		cout<<"\nla calificacion del estudiante "<<nombre<<" es "<<calificacion<<" la cual es menor que 40; por lo tanto esta reprobado";
	 }	
		
    
	
	
	
	
	
	
	
	
	
	
	return 0;
}
