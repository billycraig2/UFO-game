#include <iostream>
#include "ufo_functions.hpp"

int main() {

    std::string codeword = "codecademy";
    std::string answer = "__________";
    int misses = 0;
    std::vector<char> incorrect;
    bool guess = false;

    greet();

    while(answer != codeword && misses < 7) {
        display_misses(misses);
        std::cout << "Incorrect Guesses: ";

        for(char i : incorrect) {
            std::cout << i;
        }

        misses++;
    }

    end_game(answer, codeword);

}