#include <iostream>
using namespace std;

int x;

void func(){
	static int y = 10;
	y++;
	cout << "valor de y = " << y << endl;
}
int main(){
	for(int i = 0;i < 10;i++)
		func();
	return 0;
	
}
