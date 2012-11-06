/* 
 * File:   main.cpp
 * Author: Stanislas Michalak <stanislas.michalak@gmail.com>
 *
 * Created on 23 octobre 2012, 20:12
 */

#include <cstdlib>
#include <iostream>

/*
 * 
 */
int main(int argc, char** argv) {

   unsigned int choix;

   //Menu principal
   do {
      std::cout << "Tron" << std::endl << std::endl;
      std::cout << "1 - Nouvelle partie" << std::endl;
      std::cout << "2 - Configuration" << std::endl;
      std::cout << "3 - Quitter" << std::endl;
      std::cin >> choix;

      switch (choix) {
         case 1:
            //Nouvelle partie
            std::cout << "Nouvelle partie" << std::endl;
            break;
         case 2:
            //Configuration
            std::cout << "Configuration" << std::endl;
            break;
         default:
            continue;
            break;
      }
   } while (choix != 3);

   return EXIT_SUCCESS;
}

