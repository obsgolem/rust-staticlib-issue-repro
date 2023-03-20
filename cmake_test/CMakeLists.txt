cmake_minimum_required(VERSION 3.24)

project(test)

include(FetchContent)

FetchContent_Declare(
    Corrosion
    GIT_REPOSITORY https://github.com/corrosion-rs/corrosion.git
    GIT_TAG v0.3 # Optionally specify a commit hash, version tag or branch here
)
FetchContent_MakeAvailable(Corrosion)

corrosion_import_crate(MANIFEST_PATH ../Cargo.toml CRATE_TYPES staticlib cdylib)

add_library(test2 SHARED test2.cpp)
target_link_libraries(test2 PUBLIC repro)
target_include_directories(test2 PUBLIC ..)

add_executable(test test.cpp)