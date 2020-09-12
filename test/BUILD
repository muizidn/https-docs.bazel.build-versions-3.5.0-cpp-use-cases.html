load("@rules_cc//cc:defs.bzl", "cc_test")

cc_test(
    name = "some_lib-test",
    srcs = ["some_lib-test.cc"],
    copts = [
        "-Iexternal/gtest/include",
        "-Ilegacy/some_lib/include"
    ],
    deps = [
        "@gtest//:main",
        "//legacy/some_lib"
    ],
)