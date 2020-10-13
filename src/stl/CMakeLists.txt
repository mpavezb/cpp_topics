project(stl)

# pimpl
add_executable(bind bind.cpp)
install(TARGETS bind DESTINATION ${PROJECT_NAME})
