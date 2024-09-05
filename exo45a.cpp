/**
 * @file exo45a.cpp
 * @author José Gasser (jose.gasser@heig-vd.ch)
 * @brief ecrire dans un fichier
 * @version 0.1
 * @date 2024-09-05
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // create and open a text file
    ofstream my_file("truc.txt");
    // write to the file
    for (int i = 1; i <= 3; i++)
    {
        my_file << "line " << i << endl;
    }
    // close the file
    my_file.close();
    return 0;
}
