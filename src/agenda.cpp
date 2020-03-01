//
// Created by tobias on 29/02/2020.
//

#include "agenda.hpp"

Agenda::Agenda() {
  for (int i = 0; i < ALPHABETLEN+1; ++i) {
    agenda_[i] = new std::deque<Client*>;
  }
}

Agenda::~Agenda() {
  for (int i = 0; i < ALPHABETLEN+1; ++i) {
    delete agenda_[i];
  }
}

Client* Agenda::FindIt(const char *name) {}

void Agenda::Add(Client *cl) {
  int i = GetIndex(cl->get_name()[0]);
  agenda_[i]->push_back(cl);
}

void Agenda::Remove(const char *name) {}

void Agenda::Sort() {}

int Agenda::Size() {
  int tamanho = 0;
  for (int i = 0; i < ALPHABETLEN+1; ++i) {
    tamanho += agenda_[i]->size();
  }
  return tamanho;
}

void Agenda::Print() {
  Client *tmp;
  for (int i = 0; i < ALPHABETLEN+1; ++i) {
    for (int j = 0; j < agenda_[i]->size(); ++j) {
      tmp = agenda_[i]->at(j);
      tmp->Print();
    }
  }
}

bool Agenda::Contains(Client cl) {}

bool Agenda::Contains(const char *name) {}

int Agenda::GetIndex(const char ch) {
  char n = toupper(ch);
  int tmp = n;
  return tmp - CHARVALUE;
}
