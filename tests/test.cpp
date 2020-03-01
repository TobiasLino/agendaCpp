// Copyright 2020 Tobias

#include "../include/agendacpp/phone.hpp"
#include "../include/agendacpp/client.hpp"
#include "../src/menu.hpp"
#include "../src/agenda.hpp"

int main(void) {
  Phone *tel = new Phone;

  tel->set_phone("12 996829353");

  Client *cli = new Client;
  cli->set_name("Ab Paula");
  cli->set_age(18);
  cli->set_birth("24/10/2001");
  cli->set_gender("masculino");
  cli->set_phone(tel);

  Client *cli2 = new Client;
  cli2->set_name("Aa Paula");
  cli2->set_age(37);
  cli2->set_birth("20/01/1982");
  cli2->set_gender("feminino");

  Phone *tel2 = new Phone("12 996262526");
  cli2->set_phone(tel2);


  /*
  Menu m;
  m.ClientTableTitle();
  cli->Print();
  cli2->Print();
   */

  Agenda *ag = new Agenda;

  ag->Add(cli);
  ag->Add(cli2);

  std::cout << "Antes de ordenar:\n";
  ag->Print();
  // Ordena
  ag->Sort();
  std::cout << "Depois de ordenar:\n";
  ag->Print();

  return 0;
}

