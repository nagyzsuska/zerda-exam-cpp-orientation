#include "Decryption.h"


Decryption::Decryption() {
}

char Decryption::do_decryption(char c, int size) {
  char decrypted_char = ' ';
  decrypted_char = c + size; // ez m�g nem kezeli, hogy j�l ugorjon
  /*if (c + size > 122) {

  }
  else {
    
  }*/
  return decrypted_char;
}