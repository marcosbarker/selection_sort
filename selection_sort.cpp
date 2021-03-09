#include<iostream>
using namespace std;

void ordena(int* vet, int n){
int i, j, min, x;

	for (i = 0; i<n; i++){
	min = i;
	for (j = i +1 ; j < n; j++){
	if (vet[j] < vet[i])
	min = j;

  }

	x = vet[min];
	vet[min] = vet[i];
	vet[i] = x;

  }
}

int main(){
int n = 1;         //tamanho do vetor
int vet[n]={99};   //números para serem ordenados  

cout << "\n";	
cout << " Tamanho do vetor: " << n << "\n";
	
	for(int i = 0; i<n; i++){

cout << vet[i] << ( (i!=n-1) ? " - " : ""); //operador condicional ternario "|variável| = `if`(condição) ? <valor1> : <valor2>;"
											//uilizei para trar o simbolo separador após o último número 	  
	}

cout << "\n \n";

  ordena (vet, n);
  
cout << " Vetor ordenado" << "\n";
  
  for (int i = 0; i < n; i++){
	  
cout << vet[i] << ( (i!=n-1) ? " < " : ""); //operador condicional ternario "|variável| = `if`(condição) ? <valor1> : <valor2>;" 
									     	
  }

cout << "\n";

  return 0;

}

