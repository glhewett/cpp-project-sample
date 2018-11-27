#include "gtest/gtest.h"
#include "yaml-config.h"
#include "yaml-config-test.h"

TEST_F(YamlConfigTest, GetStringThatDoesNotExist)
{
    auto proxy = new YamlProxy("fixtures/invoice.yaml");
    ASSERT_EQ("34843", proxy->get("invoice"));
}
