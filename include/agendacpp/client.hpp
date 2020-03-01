// Copyright 2020 Tobias

#ifndef INCLUDE_AGENDACPP_CLIENT_HPP_
#define INCLUDE_AGENDACPP_CLIENT_HPP_

#include <iostream>
#include <iomanip>

#include "phone.hpp"

extern Errors *err;

#define NAMELEN 30
#define BIRTHLEN 10
#define GENDERLEN 1

class Client {
 public:
  Client();
  Client(std::string name);
  Client(Client* cl);
  virtual ~Client();

  void set_name(std::string name);
  void set_age(int age);
  void set_birth(const char *birth);
  void set_gender(std::string gender);
  void set_phone(Phone *tel);

  char* get_name();
  int get_age();
  char* get_birth();
  char* get_gender();
  Phone* get_phone();
  char* get_phone_number();

  void Print();

  bool is_equal(Client client);

 private:
  char name_[NAMELEN + 1];
  unsigned age_;
  char birth_[BIRTHLEN + 1];
  char gender_[GENDERLEN + 1];
  Phone *tel_;
};


#endif  // INCLUDE_AGENDACPP_CLIENT_HPP_
