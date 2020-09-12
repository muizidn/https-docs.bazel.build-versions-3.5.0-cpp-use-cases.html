load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "some_lib",
    srcs = ["some_lib.cc"],
    hdrs = ["include/some_lib.h"],
    copts = ["-Ilegacy/some_lib/include"],
    deps = [
        "@gtest//:main"
    ],
    visibility = [
        "//test:__pkg__"
    ]
)