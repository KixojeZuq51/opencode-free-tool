// use.cpp — part of opencode-free-tool.

#include "opencodefreetool/use.h"

#include <cstdio>

namespace opencodefreetool {

Use::Use(const std::string& config_path)
    : config_path_(config_path) {}

void Use::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Use::run() {
    if (verbose_) std::fprintf(stderr, "[opencode-free-tool] use: run\n");
    // core logic lives here
    return true;
}

}  // namespace opencodefreetool
