load(":magic.bzl", "select_build_output_files_for_magic_bazel_platform")

# Defines a matrix of configurations over Bazel operating system, compile
# configuration, and CPU architecture to select Visual Studio 2015 build files.
#
# See Bazel docs on Platforms and config_settings.
# https://docs.bazel.build/versions/master/platforms.html#built-in-constraints-and-platforms
# https://docs.bazel.build/versions/master/be/general.html#config_setting.constraint_values

config_setting(
    name = "linux_fastbuild_x86",
    constraint_values = [
        "@bazel_tools//platforms:x86_32",
        "@bazel_tools//platforms:linux",
    ],
    values = {
        "compilation_mode": "fastbuild",
    },
)

config_setting(
    name = "linux_opt_x86",
    constraint_values = [
        "@bazel_tools//platforms:x86_32",
        "@bazel_tools//platforms:linux",
    ],
    values = {
        "compilation_mode": "opt",
    },
)

config_setting(
    name = "linux_dbg_x86",
    constraint_values = [
        "@bazel_tools//platforms:x86_32",
        "@bazel_tools//platforms:linux",
    ],
    values = {
        "compilation_mode": "dbg",
    },
)

config_setting(
    name = "linux_fastbuild_x64",
    constraint_values = [
        "@bazel_tools//platforms:x86_64",
        "@bazel_tools//platforms:linux",
    ],
    values = {
        "compilation_mode": "fastbuild",
    },
)

config_setting(
    name = "linux_opt_x64",
    constraint_values = [
        "@bazel_tools//platforms:x86_64",
        "@bazel_tools//platforms:linux",
    ],
    values = {
        "compilation_mode": "opt",
    },
)

config_setting(
    name = "linux_dbg_x64",
    constraint_values = [
        "@bazel_tools//platforms:x86_64",
        "@bazel_tools//platforms:linux",
    ],
    values = {
        "compilation_mode": "dbg",
    },
)

config_setting(
    name = "windows_fastbuild_x86",
    constraint_values = [
        "@bazel_tools//platforms:x86_32",
        "@bazel_tools//platforms:windows",
    ],
    values = {
        "compilation_mode": "fastbuild",
    },
)

config_setting(
    name = "windows_opt_x86",
    constraint_values = [
        "@bazel_tools//platforms:x86_32",
        "@bazel_tools//platforms:windows",
    ],
    values = {
        "compilation_mode": "opt",
    },
)

config_setting(
    name = "windows_dbg_x86",
    constraint_values = [
        "@bazel_tools//platforms:x86_32",
        "@bazel_tools//platforms:windows",
    ],
    values = {
        "compilation_mode": "dbg",
    },
)

config_setting(
    name = "windows_fastbuild_x64",
    constraint_values = [
        "@bazel_tools//platforms:x86_64",
        "@bazel_tools//platforms:windows",
    ],
    values = {
        "compilation_mode": "fastbuild",
    },
)

config_setting(
    name = "windows_opt_x64",
    constraint_values = [
        "@bazel_tools//platforms:x86_64",
        "@bazel_tools//platforms:windows",
    ],
    values = {
        "compilation_mode": "opt",
    },
)

config_setting(
    name = "windows_dbg_x64",
    constraint_values = [
        "@bazel_tools//platforms:x86_64",
        "@bazel_tools//platforms:windows",
    ],
    values = {
        "compilation_mode": "dbg",
    },
)

cc_library(
    name = "magic",
    srcs = select_build_output_files_for_magic_bazel_platform(["magic"]),
    hdrs = ["magic/magic.h"],
    visibility = ["//visibility:public"],
)
