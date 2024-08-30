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

/**
 * @brief La fonction main calcule le colume d'un cône
 *
 * @return int
 */
int main()
{
    cout << "*** Calcul du volume d'un cône ***" << endl;
    /**
     * @brief variables de rayon et hauteur en float
     *
     */
    float rayon = 0;
    float hauteur = 0;

    /**
     * @brief Input des données dans les variables
     *
     */
    cout << "Donne le rayon [m] : ";
    cin >> rayon;
    cout << "Donne la hauteur [m] : ";
    cin >> hauteur;

    /**
     * @brief Calcul du volume en float, utilisation de la lib cmath pour M_PI et pow()
     *
     */
    float volume = M_PI * pow(rayon, 2) * hauteur / 3;

    /**
     * @brief Affichage du volume
     *
     */
    cout << "Volume [m3] : " << volume << endl;
    return 0;
}