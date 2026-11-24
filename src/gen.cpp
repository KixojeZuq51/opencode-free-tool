// gen.cpp — part of opencode-free-tool.

#include "opencodefreetool/gen.h"

#include <cstdio>

namespace opencodefreetool {

Gen::Gen(const std::string& config_path)
    : config_path_(config_path) {}

void Gen::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Gen::run() {
    if (verbose_) std::fprintf(stderr, "[opencode-free-tool] gen: run\n");
    // core logic lives here
    return true;
}

}  // namespace opencodefreetool
