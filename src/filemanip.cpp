//
// Created by tobias on 03/03/2020.
//

#include "filemanip.hpp"

Errors *report = new Errors;

FileManip::FileManip() { }

FileManip::~FileManip() {}

void FileManip::Sync(Agenda &agenda) {
  file_ = fopen(file_name_, only_write_);
  if (!file_) {
    report->Error("Opening File", true);
  }
  Client *tmp;
  for (int i = 0; i < ALPHABETLEN + 1; ++i) {
    std::list<Client*> lst = agenda.GetList();
    for (auto ref = lst.begin(); ref != lst.end(); ++ref) {
      tmp = (*ref);
      if (fwrite(&tmp, sizeof(Client()), 1, file_) < 1) {
        report->Error("Writing to file", true);
      }
    }
  }
  std::cout << "Success"
}

void FileManip::Read(Agenda &agenda) {}

void FileManip::Clear() {
  system("rm " + file_name_);
}
