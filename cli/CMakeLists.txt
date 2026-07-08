add_executable(nyx)

target_sources(nyx
    PRIVATE
    src/main.cpp
)

target_link_libraries(nyx
    PRIVATE
    nyx-engine
)