#include <string>

#pragma once

class YamlConfig {

public:

  YamlConfig(const std::string& path);
  ~YamlConfig();

  std::string get(const char*  path);
  std::string get(const std::string& path);

protected:
private:
};
