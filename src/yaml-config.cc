#include <string>

#include "yaml-config.h"

YamlConfig::YamlConfig(const std::string& path)
{
}

YamlConfig::~YamlConfig()
{
}

std::string YamlConfig::get(const std::string& path)
{
    return get(path.c_str());
}

std::string YamlConfig::get(const char* path)
{
  if (path == "key") {
    return "value";
  }
  return "";
}
