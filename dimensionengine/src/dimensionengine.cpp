#include "dimensionengine/dimensionengine.hpp"
#include "atmohorizon/atmohorizon.hpp"
#include "spdlog/spdlog.h"

using namespace chingdim::dimeng;

Engine::Engine() {
    spdlog::info("Dimension Engine started");
    spdlog::info("spdlog version: {0}.{1}.{2}", SPDLOG_VER_MAJOR, SPDLOG_VER_MINOR, SPDLOG_VER_PATCH);
    render = new atmhrz::Atmohorizon();
}