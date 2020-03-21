#include<iostream>
using namespace std;

int hanoi(int n, char a, char b, char c){
    if(n == 0){
        return n;
    }else{
        hanoi(n-1, a, c, b);
        cout << a << "->" << c << endl;
        hanoi(n-1, b, a, c);
    }
}

int main(){
    int num;
    cin >> num;
    
    hanoi(num, 'a', 'b', 'c');
    return 0;
}