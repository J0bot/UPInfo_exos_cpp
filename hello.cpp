/**
 * @file hello.cpp
 * @author J0bot
 * @brief just a random program
 * @version 0.1
 * @date 2024-08-29
 * 
 * @copyright Copyright (c) 2024
 * 
 */


#include <iostream>

/**
 * @brief namespace sdt pour eviter les sdt::cout etc...
 * 
 */
using namespace std;

int my_func1(int);
int my_func2(int,int);



/**
 * @brief fait la puissance au carré d'un nombre
 * 
 * @param a le nombre 
 * @return int retourne la puissance au carré de a
 */
int my_func1(int a){
    return a*a;
}

/**
 * @brief ouais tkt
 * 
 * @param a explosé
 * @param b fois explosé
 * @return int retourne a * b
 */
int my_func2(int a, int b){
    return a*b;
}

/**
 * @brief fonction main, ne sert à rien
 * 
 * @return int 
 */
int main(){
    cout << "Hello World" <<endl;
    cout << my_func1(3) <<endl;
    cout << my_func2(2,4) <<endl;
    return 0;
}