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
  std::string file_name_ = "agenda.dat";
  std::fstream *fIO_;
};


#endif //SRC_FILEMANIP_HPP_
