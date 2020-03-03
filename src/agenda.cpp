//
// Created by tobias on 29/02/2020.
//

#include "agenda.hpp"

Agenda::Agenda() {
  for (int i = 0; i < ALPHABETLEN+1; ++i) {
    agenda_[i] = new std::list<Client*>;
  }
}

Agenda::~Agenda() {
  for (int i = 0; i < ALPHABETLEN+1; ++i) {
    delete agenda_[i];
  }
}

Client* Agenda::FindIt(const char *name) {
  std::list<Client*>::iterator ref;
  for (int i = 0; i < ALPHABETLEN; ++i) {
    for (ref = agenda_[i]->begin(); ref != agenda_[i]->end(); ++ref) {
      if ((*ref)->get_name() == name) {
        return (*ref);
      }
    }
  }
  return nullptr;
}

void Agenda::Add(Client *cl) {
  int i = GetIndex(cl->get_name()[0]);
  agenda_[i]->push_back(cl);
}

void Agenda::Remove(const char *name) {
  std::list<Client*>::iterator ref;
  for (int i = 0; i < ALPHABETLEN; ++i) {
    for (ref = agenda_[i]->begin(); ref != agenda_[i]->end(); ++ref) {
      if ((*ref)->get_name() == name) {
        agenda_[i]->erase(ref);
        return;
      }
    }
  }
  std::cout << "Elemento \"" << name << "\" não está na lista\n";
}

bool CompName(Client* first, Client *second) {
  std::string f = first->get_name();
  std::string s = second->get_name();
  unsigned int i = 0;
  while ((i < f.length()) && (i < s.length())) {
    if (tolower(f[i]) < tolower(s[i])) return true;
    else if (tolower(f[i]) > tolower(s[i])) return false;
    ++i;
  }
  return ( f.length() < s.length());
}

void Agenda::Sort() {
  std::list<Client*>::iterator ref;
  for (int i = 0; i < ALPHABETLEN+1; ++i) {
    for (ref = agenda_[i]->begin(); ref != agenda_[i]->end(); ++ref)
      agenda_[i]->sort(CompName);
  }
}

bool CompEquals(Client *first, Client* second) {
  std::string f = first->get_name();
  std::string s = second->get_name();
  unsigned int i = 0;
  while ((i < f.length()) && (i < s.length())) {
    if (tolower(f[i]) != tolower(s[i])) return false;
    ++i;
  }
  return true;
}

void Agenda::MakeUnique() {
  std::list<Client*>::iterator ref;
  for (int i = 0; i < ALPHABETLEN+1; ++i) {
    for (ref = agenda_[i]->begin(); ref != agenda_[i]->end(); ++ref)
      agenda_[i]->unique(CompEquals);
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
  std::list<Client*>::iterator ref;
  for (int i = 0; i < ALPHABETLEN+1; ++i) {
    for (ref = agenda_[i]->begin(); ref != agenda_[i]->end(); ++ref) {
      (*ref)->Print();
    }
  }
}

void Agenda::PrintMale() {
  std::list<Client*>::iterator ref;
  for (int i = 0; i < ALPHABETLEN+1; ++i) {
    for (ref = agenda_[i]->begin(); ref != agenda_[i]->end(); ++ref) {
      if ((*ref)->get_gender()[0] == 'M')
        (*ref)->Print();
    }
  }
}

void Agenda::PrintFemale() {
  std::list<Client*>::iterator ref;
  for (int i = 0; i < ALPHABETLEN+1; ++i) {
    for (ref = agenda_[i]->begin(); ref != agenda_[i]->end(); ++ref) {
      if ((*ref)->get_gender()[0] == 'F')
      (*ref)->Print();
    }
  }
}


auto Agenda::GetList(int index) -> decltype(auto) {
  return agenda_[index];
}

bool Agenda::Contains(Client *cl) {
  bool tmp = false;
  for (int i = 0; i < ALPHABETLEN + 1; ++i) {
    auto k = std::find(agenda_[i]->begin(), agenda_[i]->end(), cl);
    if (*k == cl) tmp = true;
  }
  return tmp;
}

int Agenda::GetIndex(const char ch) {
  char n = toupper(ch);
  int tmp = n;
  return tmp - CHARVALUE;
}
