//
// Created by tobias on 03/03/2020.
//

#ifndef SRC_FILEMANIP_HPP_
#define SRC_FILEMANIP_HPP_

#include <fstream>
#include <string>

#include "agenda.hpp"
#include "../include/agendacpp/errors.hpp"

class FileManip {
 public:
  FileManip();
  virtual ~FileManip();
  void Sync(Agenda &agenda);
  void Read(Agenda &agenda);
  void Clear();

 private:
  FILE *file_;
  const char* file_name_ = "agenda.dat";
  const char* only_write_ = "ab";
  const char* only_read_ = "rb";
};


#endif //SRC_FILEMANIP_HPP_
