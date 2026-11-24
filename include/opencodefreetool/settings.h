// settings.h — hot-reloadable runtime configuration.

#pragma once

#include <string>
#include <vector>

namespace opencodefreetool {

struct Settings {
    std::string store_path{"~/.config/opencode-free-tool/state.json"};
    bool quiet{false};
    bool hot_reload{true};
    std::vector<std::string> watch_patterns;

    static Settings load_default();
    static Settings defaults();
    bool valid() const;
};

}  // namespace opencodefreetool
