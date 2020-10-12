project(language)

# pimpl
add_executable(functors functors.cpp)
install(TARGETS functors DESTINATION ${PROJECT_NAME})
