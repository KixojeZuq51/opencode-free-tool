// main.cpp — entry point. Wires config and subsystems together.

#include "opencodefreetool/settings.h"
#include "opencodefreetool/gen.h"
#include "opencodefreetool/activate.h"
#include "opencodefreetool/use.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    opencodefreetool::Settings settings = opencodefreetool::Settings::load_default();
    opencodefreetool::Gen gen(settings.store_path);
    opencodefreetool::Activate activate(settings.store_path);
    opencodefreetool::Use use(settings.store_path);
    std::fprintf(stderr, "[opencode-free-tool] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
