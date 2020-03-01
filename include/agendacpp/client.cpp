// Copyright 2020 Tobias

#include "client.hpp"

// Errors *err = new Errors;

Client::Client() {
  memset(this->name_, '-', NAMELEN);
  this->age_ = 0;
  memset(this->birth_, '-', BIRTHLEN);
  memset(this->gender_, '-', GENDERLEN);
  this->tel_ = new Phone;
}

Client::Client(std::string name) {
  int i = snprintf(this->name_, NAMELEN+1, "%s", name.c_str());
  if (i < 0 || i > NAMELEN+1) {
    err->Error("Writing to name");
  }
  this->age_ = 0;
  memset(this->birth_, '-', BIRTHLEN);
  memset(this->gender_, '-', GENDERLEN);
  this->tel_ = new Phone;
}

Client::~Client() {
  delete [] tel_;
}

void Client::set_name(std::string name) {
  int i = snprintf(this->name_, NAMELEN+1, "%s", name.c_str());
  if (i < 0 || i > NAMELEN+1) {
    err->Error("Writing to name");
  }
}

void Client::set_phone(Phone *tel) {
  this->tel_ = tel;
}

void Client::set_gender(std::string gender) {
  this->gender_[0] = gender[0];
}

void Client::set_birth(const char *birth) {
  int i = snprintf(this->birth_, NAMELEN+1, "%s", birth);
  if (i < 0 || i > NAMELEN+1) {
    err->Error("Writing to birth");
  }
}

void Client::set_age(int age) {
  this->age_ = age;
}

char* Client::get_name() {
  return this->name_;
}

int Client::get_age() {
  return this->age_;
}

char *Client::get_birth() {
  return this->birth_;
}

char *Client::get_gender() {
  return this->gender_;
}

Phone* Client::get_phone() {
  return this->tel_;
}

char* Client::get_phone_number() {
  return tel_->get_phone();
}

void Client::Print() {
  std::cout << "|" << std::setw(30) << std::setfill(' ')
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

bool Client::is_equal(Client client) {
  return this->name_ == client.name_;
}
