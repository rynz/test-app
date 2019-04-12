#include "app/app.h"

namespace app {

using std::string;

/*static*/ std::unique_ptr<App> App::Create(AppError* error,
                                            std::string* error_text) {
  std::unique_ptr<App> app(new App());
  *error = app->Init(error_text);
  return (*error == AppError::NONE) ? std::move(app) : nullptr;
}

App::AppError App::Init(string* error_text) {
  protocol_.set_str("Example App");
  return AppError::NONE;
}

}  // namespace app
