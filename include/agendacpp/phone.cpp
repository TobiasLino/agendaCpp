// Copyright 2020 Tobias

#include "phone.hpp"

Errors *err = new Errors;


Phone::Phone() {
  strcpy(number_, "00000000");
}
Phone::Phone(std::string number) {
  int i = snprintf(this->number_, NUMBERLEN+1, "%s", number.c_str());
  if (i < 0 || i > NUMBERLEN+1) {
    err->Error("Writing to number");
  }
}
void Phone::set_phone(std::string number) {
  int i = snprintf(this->number_, NUMBERLEN+1, "%s", number.c_str());
  if (i < 0 || i > NUMBERLEN+1) {
    err->Error("Writing to number");
  }
}
char* Phone::get_phone() {
  return number_;
}
