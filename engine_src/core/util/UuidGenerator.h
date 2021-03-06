#pragma once

#include <string>

/*
* A simple Universally Unique Identifier generator. 
* (Or Globally Unique Identifier (GUID), which means the same thing)
* Generates a new unique value each time newUUID() is called.
*/

namespace util {

  typedef std::string Uuid;

class UuidGenerator {
  static Uuid newUUID();
};

} // namespace util
