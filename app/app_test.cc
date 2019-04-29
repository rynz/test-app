#include "app/app.h"

#include <memory>
#include <string>

#include "gtest/gtest.h"

namespace app {
namespace {

using std::string;

TEST(AppTest, AppExample) {
  App::AppError error;
  string error_text;
  std::unique_ptr<App> app = App::Create(&error, &error_text);
  EXPECT_EQ(error_text, "");
  ASSERT_EQ(error, App::AppError::NONE);
  EXPECT_EQ(app->test(), "Test Example App");
  EXPECT_EQ(app->Perform(), "Abracadabra!");
}

}  // namespace
}  // namespace app
