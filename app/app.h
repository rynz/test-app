#ifndef APP_APP_H_
#define APP_APP_H_

#include <memory>
#include <string>

#include "protocol/protocol.h"

namespace app {

class App {
 public:
  // Factory method: creates and returns a App.
  // May return null on failure.
  enum class AppError { NONE };
  static std::unique_ptr<App> Create(AppError* error, std::string* error_text);

  // App is not copyable or moveable.
  App(const App&) = delete;
  App& operator=(const App&) = delete;

  // Example test, doesn't really do anything.
  inline std::string test() const { return protocol_.str(); }

 private:
  // Clients can't invoke the constructor directly.
  App() = default;

  AppError Init(std::string* error_text);

  protocol::Protocol protocol_;
};

}  // namespace app

#endif  // APP_APP_H_
