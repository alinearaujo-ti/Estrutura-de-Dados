#include <iostream>
int fat(int n){
    int fatorial;
    if(n <= 1){
        return 1;
    }else{
        fatorial = n * fat(n - 1);
        return fatorial;
    }
}
int main(){
    int n;
    std::cin >> n;
    std::cout << fat(n);
    /*
int fat(int n){
    //fat(n) = n*fat(n-1)
    //n! = n *(n-1)*(n-2).....
    if()
    */

}