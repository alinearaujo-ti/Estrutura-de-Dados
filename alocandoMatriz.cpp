#include<iostream>
#include<cstdlib>
 using namespace std;
 int main(){
	cout << "Vamos criar uma matriz" << endl;
	cout << "Digite a ordem da matriz:" << endl;
  int n;
	cin >> n;
	int **array = new (nothrow) int*[n];
	if(array == NULL){
		cout << "erro de memória" << endl;
		exit(1);
	}
	
	for(int i = 0;i<5;i++){
		array[i] = new (nothrow) int[n];
		if(array == NULL){
			cout << "erro de memória" << endl;
			exit(1);
		}		
	}
	//preencher
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cin >> array[i][j];
		}
	}
	//imprimir
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cout << array[i][j] << "";
		}
		cout << endl;
	}
	//delete
	for(int i = 0; i < n;i++)
			delete[] array[i];
	delete[] array;
	
	return 0;
}
