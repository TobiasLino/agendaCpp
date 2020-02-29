// Copyright 2020 Tobias
#include <iostream>

#include "../include/agendacpp/phone.hpp"

int main(void) {
  Phone tel;

  tel.set_phone("12", "996829353");

  std::cout << tel.get_phone() << std::endl;
  return 0;
}

