// Copyright 2020 Tobias

#ifndef SRC_AGENDA_HPP_
#define SRC_AGENDA_HPP_

#include <list>

#include "../include/agendacpp/client.hpp"

#define ALPHABETLEN 26

class Agenda {
 private:
  std::list<Client> agenda_[ALPHABETLEN + 1];
};


#endif  //SRC_AGENDA_HPP_
