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
int main(int argc, char** argv) {//test

   char continuer = 'N';
   
   std::cout << "Tron" << std::endl;
   do {
      std::cout << "Continuer (O/N)" << std::endl;
      std::cin >> continuer;
   } while(continuer != 'N');
   
   return EXIT_SUCCESS;
}

