#include <iostream>
using namespace std;

void preencheArray(int *array, int n){
	for(int i = 0;i < n;i++){
		cout << "digite um valor:";
		cin >> array[i];	
	}
}

void imprimeArray(int *array, int n){
	for(int i = 0;i < n;i++){
		cout << array[i] << " ";
		cout << endl;	
	}
}

int main(){
	int n;
	cout << "digite o tamanho:";
	cin >> n;
	
	int *array = new int[n]; 
	
	preencheArray(array, n);
	imprimeArray(array, n);
	
	delete [] array;
	array = nullptr ;
	return 0;
	
}
