// Copyright 2020 Tobias

#include "phone.hpp"

Phone::Phone() {
  strcpy(ddd_, "000000");
  strcpy(number_, "00000000");
}
Phone::Phone(std::string ddd, std::string number) {
  strcpy(this->ddd_, ddd.c_str());
  strcpy(this->number_, number.c_str());
}
void Phone::set_phone(std::string ddd, std::string number) {
  strcpy(this->ddd_, ddd.c_str());
  strcpy(this->number_, number.c_str());
}
char* Phone::get_phone() {
  char tmp[DDDLEN + NUMBERLEN + 1];
  strcat(tmp, ddd_);
  strcat(tmp, number_);
  return tmp;
}
