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

  Client *cli3 = new Client;
  cli3->set_name("Ad Paula");
  cli3->set_age(37);
  cli3->set_birth("20/01/1982");
  cli3->set_gender("feminino");

  Phone *tel3 = new Phone("12 996262526");
  cli3->set_phone(tel3);

  Client *cli4 = new Client;
  cli4->set_name("Ac Paula");
  cli4->set_age(37);
  cli4->set_birth("20/01/1982");
  cli4->set_gender("feminino");

  Phone *tel4 = new Phone("12 996262526");
  cli4->set_phone(tel4);


  Client *cli5 = new Client;
  cli5->set_name("Ab Paula");
  cli5->set_age(37);
  cli5->set_birth("20/01/1982");
  cli5->set_gender("feminino");

  Phone *tel5 = new Phone("12 996262526");
  cli5->set_phone(tel5);
  /*
  Menu m;
  m.ClientTableTitle();
  cli->Print();
  cli2->Print();
   */

  Agenda *ag = new Agenda;

  ag->Add(cli);
  ag->Add(cli2);
  ag->Add(cli3);
  ag->Add(cli4);
  ag->Add(cli5);

  std::cout << "Antes de ordenar:\n";
  ag->Print();
  // Ordena
  ag->Sort();
  std::cout << "Depois de ordenar:\n";
  ag->Print();

  ag->MakeUnique();
  ag->Remove(cli->get_name());

  std::cout << "Depois:\n";
  ag->Print();

  ag->Remove(cli2->get_name());

  std::cout << "Depois:\n";
  ag->Print();

  // TODO : o sistema não consegue passar o parâmetro por valor, só encontra
  //        algo quando o parâmetro é passado por referência.
  Client *tmp = ag->FindIt(cli3->get_name());
  std::cout << "\n";
  tmp->Print();

  return 0;
}

