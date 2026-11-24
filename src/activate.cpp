// activate.cpp — part of opencode-free-tool.

#include "opencodefreetool/activate.h"

#include <cstdio>

namespace opencodefreetool {

Activate::Activate(const std::string& config_path)
    : config_path_(config_path) {}

void Activate::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Activate::run() {
    if (verbose_) std::fprintf(stderr, "[opencode-free-tool] activate: run\n");
    // core logic lives here
    return true;
}

}  // namespace opencodefreetool
