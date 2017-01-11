//#define CATCH_CONFIG_MAIN
#include "Catch.h"
#include "Decryption.h"

TEST_CASE("A will be B with size 1) {
  Decryption decr;
  REQUIRE(decr.do_decryption('A', 1) == 'B');
}

TEST_CASE("Z will be A with size 1) {
  Decryption decr;
REQUIRE(decr.do_decryption('Z', 1) == 'A');
}