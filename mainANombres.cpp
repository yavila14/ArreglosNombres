#include <iostream>
using namespace std;
#define t 6

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string nombres[t],copia[t],repetido[t];
    int n[t];
    int a,i,j,op,c,p;
    c=0;
  	a=0;
    j=0;
    cout << "Por favor ingrese cada nombre \n";
    
	for(i = 0;i<t;i=i+1)
    {
        cout << "\nNombre: ";
        getline(cin, nombres[i]);
       
    }	
    
while(a<t){
	
	for(i=0;i<t;i++){
	
		if(nombres[a]==nombres[i]){
			c=c+1;
			copia[a]=nombres[a];	
			
			}
		
		}


if((c>1)&&(i==t)){
		repetido[j]=nombres[a];
		n[j]=c;
	}
	a=a+1;
	i=0;
	c=0;
	j=j+1;
	
}
for(i=0;i<5;i++)
{cout <<"\n El nombre "<<repetido[i] <<" se repite  "<<n[i];
}

	return 0;
	

}
