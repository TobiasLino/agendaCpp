// Copyright 2020 Tobias

#ifndef SRC_AGENDA_HPP_
#define SRC_AGENDA_HPP_

#include <list>
#include <algorithm>

#include "../include/agendacpp/client.hpp"

#define ALPHABETLEN 26
#define CHARVALUE 65

class Agenda {
 public:
  Agenda();
  virtual ~Agenda();
  Client* FindIt(const char *name);
  void Add(Client *cl);
  void Remove(const char *name);
  void Sort();
  void MakeUnique();
  int Size();
  void Print();
  void PrintMale();
  void PrintFemale();
  auto GetList(int index) -> decltype(auto);
  bool Contains(Client *cl);
  static int GetIndex(const char ch);

 private:
  std::list<Client*> *agenda_[ALPHABETLEN + 1];
};


#endif  //SRC_AGENDA_HPP_
