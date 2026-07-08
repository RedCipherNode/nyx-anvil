add_library(nyx-engine STATIC)

target_sources(nyx-engine
    PRIVATE
    src/engine.cpp
)

target_include_directories(nyx-engine
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_compile_features(nyx-engine
    PUBLIC
    cxx_std_20
)