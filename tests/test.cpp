// Copyright 2020 Tobias

#include "../include/agendacpp/phone.hpp"
#include "../include/agendacpp/client.hpp"

int main(void) {
  Phone tel;

  tel.set_phone("12 996829353");

  Client cli;
  cli.set_name("Tobias");
  cli.set_age(18);
  cli.set_birth("24/10/2001");
  cli.set_gender("Masculino");
  cli.set_phone(&tel);

  cli.Print();

  return 0;
}

