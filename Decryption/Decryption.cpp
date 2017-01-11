#include "Decryption.h"


Decryption::Decryption() {
}

char Decryption::do_decryption(char c, int size) {
  char decrypted_char = ' ';
 // decrypted_char = c + size; // ez még nem kezeli, hogy jól ugorjon
  if (c + size > 122 || c + size < 97 && c + size > 91 ) {
    decrypted_char = c + size - 26;
  }
  else {
    decrypted_char = c + size;
  }
  return decrypted_char;
}