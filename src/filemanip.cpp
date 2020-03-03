//
// Created by tobias on 03/03/2020.
//

#include "filemanip.hpp"

Errors *report = new Errors;

FileManip::FileManip() {
  this->fIO_ = new std::fstream();
}

FileManip::~FileManip() {
  delete fIO_;
}

void FileManip::Sync(Agenda &agenda) {
  fIO_->open(file_name_.c_str(), std::ios::ate | std::ios::out | std::ios::in);
  if (!fIO_->is_open()) {
    report->Error("Opening File.", true);
  }
  for (int i = 0; i < ALPHABETLEN + 1; ++i) {
    std::list<Client*> *lst = agenda.GetList(i);
    for (auto ref = lst->begin(); ref != lst->end(); ++ref) {
      fIO_->write((char*)(*ref), sizeof(Client));
    }
  }
}

void FileManip::Read(Agenda &agenda) {
  fIO_->seekg(0);
  Client *tmp;

  while (fIO_->read((char*)tmp, sizeof(Client))) {
    tmp->Print();
    agenda.Add(tmp);
  }
}

void FileManip::Clear() {
  /*
  const char *clear_command = "rm ";
  system(clear_command + file_name_);
   */
  system("rm agenda.dat");
}
