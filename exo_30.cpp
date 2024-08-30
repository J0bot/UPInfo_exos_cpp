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
 * @brief Fonction de calcul de volume
 *
 * @return float
 */
float calcul_volume(float, float);

/**
 * @brief La fonction main de mon programme
 *
 * @return int
 */
int main()
{
    cout << "*** Calcul du volume d'un cône ***" << endl;
    /**
     * @brief variables de rayon en float
     *
     */
    float rayon = 0;

    /**
     * @brief variable de hauteur en float;
     *
     */
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
    float volume = calcul_volume(rayon, hauteur);

    /**
     * @brief Affichage du volume
     *
     */
    cout << "Volume [m3] : " << volume << endl;
    return 0;
}

/**
 * @brief Cacul du volume d'un cone
 *
 * @param rayon input du rayon en float
 * @param hauteur input de l'hauteur en float
 * @return float
 */
float calcul_volume(float rayon, float hauteur)
{
    return M_PI * pow(rayon, 2) * hauteur / 3;
}