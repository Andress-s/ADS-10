// Copyright 2022 NNTU-CS
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include  "tree.h"

std::vector<char> getPerm(const Tree& tree, int n) {
  std::vector<std::vector<char>> p = tree.getPerms();
    if (!(tree.perms.size() < n)) {
        return tree.perms[n - 1];
    }
}
