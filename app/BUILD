cc_library(
    name = "app",
    srcs = ["app.cc"],
    hdrs = ["app.h"],
    deps = [
        "@rynz_protocol//protocol",
        "@magic//:magic",
    ],
)

cc_test(
    name = "app_test",
    srcs = ["app_test.cc"],
    deps = [
        ":app",
        "@com_google_googletest//:gtest_main",
    ],
)
