#include "Decryption.h"


Decryption::Decryption() {
}

char Decryption::do_decryption(char c, int size) {
  char decrypted_char = ' ';
  decrypted_char = c + size; // ez még nem kezeli, hogy jól ugorjon
  /*if (c + size > 122) {

  }
  else {
    
  }*/
  return decrypted_char;
}