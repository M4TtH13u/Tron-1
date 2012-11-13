/* 
 * File:   game.cpp
 * Author: Stanislas Michalak <stanislas.michalak@gmail.com>
 *
 * Created on 9 novembre 2012, 9:30
 */

#include <cstdlib>
#include <iostream>

/*
 * 
 */

bool play() {
  do {
      std::cout << "Tron" << std::endl << std::endl;
      std::cout << "1 - Joueur vs IA" << std::endl;
      std::cout << "2 - Joueur vs Joueur" << std::endl;
      std::cout << "3 - Retour menu" << std::endl;
      std::cin >> choix;

      switch (choix) {
         case 1:
            //partie Vs IA
            std::cout << "Joueur vs IA" << std::endl;
            break;
         case 2:
            //Partie Vs Joueur
            std::cout << "Joueur vs Joueur" << std::endl;
            break;
         default:
            continue;
            break;
      }
   } while (choix != 3);
return true;
}