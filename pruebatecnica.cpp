
/* HackerLand University tiene la siguiente pol�tica de calificaci�n:

Cada estudiante recibe una calificaci�n en el rango inclusivo de 0 a 100.

Cualquier calificaci�n inferior a 40 es una calificaci�n reprobatoria.

Sam es profesor en la universidad y le gusta redondear la calificaci�n de cada estudiante de acuerdo con estas reglas:

1) Si la diferencia entre la calificaci�n y el siguiente m�ltiplo de 5 es menor que 3, redondee la calificaci�n al siguiente m�ltiplo de 5.

2) Si el valor de la calificaci�n es inferior a 38, no se redondea, ya que el resultado seguir� siendo una calificaci�n reprobatoria.
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
