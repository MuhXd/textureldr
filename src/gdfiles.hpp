#pragma once
#include <Geode/Geode.hpp>
#include <Geode/utils/file.hpp>

using namespace geode::prelude;
std::filesystem::path getGDResourcesPath() {
    std::filesystem::path gdpath = geode::dirs::getGameDir();
     if (!std::filesystem::exists(gdpath / "Resources")) {
        log::debug("WINDOW BRAINED!!!!!!!!!!! (i'll check the other paths later) {}", gdpath);
        return
     }
    return gdpath / "Resources";
} // geode::dirs::getGameDir() / "Resources"
