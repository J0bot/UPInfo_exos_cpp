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

int my_func(int);



/**
 * @brief fait la puissance au carré d'un nombre
 * 
 * @param a le nombre 
 * @return int retourne la puissance au carré de a
 */
int my_func(int a){
    return a*a;
}

/**
 * @brief fonction main, ne sert à rien
 * 
 * @return int 
 */
int main(){
    cout << "Hello World" <<endl;
    cout << my_func(3) <<endl;
    return 0;
}