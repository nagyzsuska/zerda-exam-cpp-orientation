#ifndef FILE_OPERATION_
#define FILE_OPERATION_
#include <string>

class FileOperation {
private:
  std::string decrypted_text;
  const char* input_file_name;
  const char* output_file_name;
  int shift_size;
public:
  FileOperation();
  void set_input_file_name(std::string file_name);
  void set_output_file_name(std::string file_name);
  void set_shift_size(int size);
  std::string read_file_line_by_line_and_letter_by_letter_and_decrypt_the_text();
  void write_the_decrypted_text_to_a_file(std::string decrypted_text);
};

#endif // !FILE_OPERATION_

