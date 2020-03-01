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

void Agenda::Sort() {
  Client *atual, *next;
  std::deque<Client*>::iterator j;
  int k;
  for (int i = 0; i < ALPHABETLEN+1; ++i) {
    for (j = agenda_[i]->begin(), k = 0;
          j != agenda_[i]->end() && k < agenda_[i]->size();
          ++j, ++k) {
      atual = agenda_[i]->at(k);
      next = agenda_[i]->at(k+1);
      if (strcmp(atual->get_name(),next->get_name()) > 0) {
        agenda_[i]->insert(j, next);
        agenda_[i]->erase(j+1);
      }
    }
  }
}

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

void Agenda::PrintMale() {
  Client *tmp;
  for (int i = 0; i < ALPHABETLEN+1; ++i) {
    for (int j = 0; j < agenda_[i]->size(); ++j) {
      tmp = agenda_[i]->at(j);
      if (tmp->get_gender()[0] == 'M')
        tmp->Print();
    }
  }
}

void Agenda::PrintFemale() {
  Client *tmp;
  for (int i = 0; i < ALPHABETLEN+1; ++i) {
    for (int j = 0; j < agenda_[i]->size(); ++j) {
      tmp = agenda_[i]->at(j);
      if (tmp->get_gender()[0] == 'F')
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
