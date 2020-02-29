// Copyright 2020 Tobias

#ifndef INCLUDE_AGENDACPP_PHONE_HPP_
#define INCLUDE_AGENDACPP_PHONE_HPP_

#include <string.h>

#include <string>

#define DDDLEN 6
#define NUMBERLEN 9

class Phone {
 public:
  Phone();
  Phone(std::string ddd, std::string number);
  void set_phone(std::string ddd, std::string number);
  char* get_phone();

 private:
  char ddd_[DDDLEN + 1];
  char number_[NUMBERLEN + 1];
};


#endif // INCLUDE_AGENDACPP_PHONE_HPP_
