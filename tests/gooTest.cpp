//
// Created by tobias on 02/03/2020.
//

#include <gtest/gtest.h>
#include "../src/filemanip.hpp"
/*
TEST(AgendaSimpleTest, CreatingAndAdding) {
  Client *cl1 = new Client;
  cl1->set_name("Tobias da Silva Lino");
  Client *cl2 = new Client;
  cl2->set_name("Ana Paula da Silva Lino");
  Client *cl3 = new Client;
  cl3->set_name("Fabio dos Santos Lino");
  ASSERT_NE(nullptr, cl1);
  ASSERT_NE(nullptr, cl2);
  ASSERT_NE(nullptr, cl3);


  Agenda a;
  a.Add(cl1);
  a.Add(cl2);
  a.Add(cl3);
  ASSERT_EQ(3, a.Size());

  FileManip flio;
  flio.Sync(a);

}
int main(int argc, char **argv) {
  ::testing::InitGoogleTest( &argc, argv );
  return RUN_ALL_TESTS();
}
 */

int main(void) {
  Client *cl1 = new Client;
  cl1->set_name("Tobias da Silva Lino");
  Client *cl2 = new Client;
  cl2->set_name("Ana Paula da Silva Lino");
  Client *cl3 = new Client;
  cl3->set_name("Fabio dos Santos Lino");

  Agenda a;
  a.Add(cl1);
  a.Add(cl2);
  a.Add(cl3);

  FileManip flio;
  flio.Sync(a);
  Agenda n;
  flio.Read(n);

  n.Print();
}
