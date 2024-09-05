/**
 * @file exo42.cpp
 * @author José Gasser (jose.gasser@heig-vd.ch)
 * @brief Devinette
 * @version 0.1
 * @date 2024-09-05
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <iostream>
#include <random>

using namespace std;

int main()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(0, 100);

    int rand_numb = distr(gen);
    cout << rand_numb << endl;

    int input_user;

    while (input_user != rand_numb)
    {
        cout << "Trouvez le nombre mystère : ";
        cin >> input_user;

        if (input_user <= 0)
        {
            cout << "Pas une bonne valeur !" << endl;
            return 0;
        }

        if (input_user > rand_numb)
        {
            cout << "TROP GRAND" << endl;
        }
        else if (input_user < rand_numb)
        {
            cout << "TROP PETIT" << endl;
        }
        else if (input_user == rand_numb)
        {
            cout << "BRAVO!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
            return 0;
        }
        else
        {
            cout << "Jsp ce que t'as fait mais ça fonctionne pas" << endl;
        }
    }

    return 0;
}