workspace(name = "rynz_app")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# GoogleTest
http_archive(
    name = "com_google_googletest",
    strip_prefix = "googletest-master",
    urls = ["https://github.com/google/googletest/archive/master.zip"],
)

# Abseil (https://docs.bazel.build/versions/master/external.html#transitive-dependencies)
http_archive(
    name = "com_google_absl",
    strip_prefix = "abseil-cpp-master",
    urls = ["https://github.com/abseil/abseil-cpp/archive/master.zip"],
)

# Test Protocol
http_archive(
    name = "rynz_protocol",
    strip_prefix = "test-protocol-master",
    urls = ["https://github.com/rynz/test-protocol/archive/master.zip"],
)
