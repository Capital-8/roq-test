/* Copyright (c) 2017-2020, Hans Erik Thrane */

#include "roq/test/application.h"

namespace {
constexpr std::string_view DESCRIPTION = "Roq Test";
}  // namespace

int main(int argc, char **argv) {
  return roq::test::Application(
      argc,
      argv,
      DESCRIPTION).run();
}