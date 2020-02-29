// Copyright 2020 Tobias

#include "phone.hpp"

Phone::Phone() {
  strcpy(number_, "00000000");
}
Phone::Phone(std::string number) {
  strcpy(this->number_, number.c_str());
}
void Phone::set_phone(std::string number) {
  strcpy(this->number_, number.c_str());
}
char* Phone::get_phone() {
  return number_;
}
