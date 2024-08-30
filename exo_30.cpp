/**
 * @file exo_30.cpp
 * @author José Gasser (jose.gasser@heig-vd.ch)
 * @brief Calcul du volume, trop stylé t'as vu ça.
 * @version 0.1
 * @date 2024-08-30
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "*** Calcul du volume d'un cône ***" << endl;
    float rayon = 0;
    float hauteur = 0;
    cout << "Donne le rayon [m] : ";
    cin >> rayon;
    cout << "Donne la hauteur [m] : ";
    cin >> hauteur;
    float volume = M_PI * pow(rayon, 2) * hauteur / 3;
    cout << "Volume [m3] : " << volume << endl;
    return 0;
}