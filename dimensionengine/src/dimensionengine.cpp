#include "dimensionengine/dimensionengine.hpp"
#include "atmohorizon/atmohorizon.hpp"
#include "spdlog/spdlog.h"

using namespace chingdim::dimeng;

Engine::Engine() {
    spdlog::info("Dimension Engine started");
    render = new atmhrz::Atmohorizon();
}