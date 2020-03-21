#include <iostream>
int fibb(int n){
    //caso base
    if(n==0) return 0;
    else if(n==1) return 1;
    else return fibb(n-1)+fibb(n-2);
    
}

int main(){
    int n = 0;
    std::cin >> n;
    std ::cout << fibb(n);
    
    return 0;
}
