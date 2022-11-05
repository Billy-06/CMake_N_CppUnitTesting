#include "Library.h"
#include "config.hpp"
#include <nlohmann/json.hpp>
#include "spdlog/spdlog.h"
#include "fmt/format.h"

using namespace std;

int main()
{
    auto welcome_message = fmt::format("Welcome to my {} v{}!\n", project_name, project_version);
    spdlog::info(welcome_message);

    auto json_message = fmt::format("Using JSON Lib v{}.{}.{}\n", NLOHMANN_JSON_VERSION_MAJOR, NLOHMANN_JSON_VERSION_MINOR, NLOHMANN_JSON_VERSION_PATCH);
    spdlog::info(json_message);

    Library *lib = new Library();
    lib->setShelveCount(34);
    lib->setName("Downing Street");

    cout
    << "NLohmann Project:\n==================="
    << "\nNLohmann Project Version: " << NLOHMANN_JSON_VERSION_MAJOR
    << "." << NLOHMANN_JSON_VERSION_MINOR
    << "." << NLOHMANN_JSON_VERSION_PATCH
    << "\n\nProject Name: " << project_name
    << "\nProject Version: " << project_version
    << "\n\nThe new Library at: "
    << lib->getName()
    << "\nhas been reported to have: "
    << lib->getShelveCount()
    << " shelves";

    delete lib;

    return 0;
}
