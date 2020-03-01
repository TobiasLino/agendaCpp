//
// Created by tobias on 29/02/2020.
//

#include "menu.hpp"

/*
 * void Client::Print() {
  std::cout << std::setw(30) << std::setfill(' ')
            << name_ << "|"
            << std::setw(5) << std::setfill(' ')
            << age_ << "|"
            << std::setw(12) << std::setfill(' ')
            << birth_ << "|"
            << std::setw(8) << std::setfill(' ')
            << gender_ << "|"
            << std::setw(17) << std::setfill(' ')
            <<  tel_->get_phone() << "|"
            << std::endl;
}
 */

void Menu::ClientTableTitle() {
  std::cout << std::setw(17) << std::setfill(' ')
            << "Nome" << std::setw(16) << std::setfill(' ');
}
