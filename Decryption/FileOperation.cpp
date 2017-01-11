#include "FileOperations.h"
#include <fstream>
#include <iostream>
#include <string>
#include "Decryption.h"
using namespace std;

FileOperation::FileOperation()
{
  decrypted_text = "";
  input_file_name = "";
  output_file_name = "";
  shift_size = 0;
}

void FileOperation::set_input_file_name(std::string file_name) {
  input_file_name = file_name.c_str();
}

void FileOperation::set_output_file_name(std::string file_name) {
  output_file_name = file_name.c_str();
}

void FileOperation::set_shift_size(int size)
{
  shift_size = size;
}

std::string FileOperation::read_file_line_by_line_and_letter_by_letter_and_decrypt_the_text() throw (std::string){
  Decryption dec;
  ifstream file;
  file.open("input.txt");
  string content;
  string line;

  if (!file.is_open()) {
    throw "could not open the file";
  }
  else {

    while (getline(file, line)) {
      for (unsigned int i = 0; i < line.size(); i++) {
        if (isalpha(line[i])) {
          line[i] = dec.do_decryption(line[i], shift_size);
        }
        content += line[i];
      }
      content += '\n';
    }
    cout << content;
  }
  file.close();
  return content;
}

void FileOperation::write_the_decrypted_text_to_a_file(std::string decrypted_text)  throw (std::string) {
  ofstream my_file;
  if (!my_file.is_open()) {
    throw "could not open the file";
  } else {
    my_file.open(output_file_name);
    my_file << decrypted_text;
    my_file.close();
  }
}