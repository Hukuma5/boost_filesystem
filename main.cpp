// Copyright 2018 Your Name <your_email>

#include <header.hpp>
#include <string>

int main(int argc, char **argv) {
  std::string path_to_ftp;
  if (argc == 2) {
    path_to_ftp = std::string(argv[1]);
  } else {
    path_to_ftp = "../";
  }
  findFile(path_to_ftp, path_to_ftp.length() + 1);
  print();
}
