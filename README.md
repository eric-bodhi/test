# Test Project for Faker-cxx lib

In order to use Faker-cxx
```
mkdir externals
cd externals
git submodule add https://github.com/cieslarmichal/faker-cxx.git
```

and inside CMake
```
set(BUILD_FAKER_TESTS OFF)

add_subdirectory(externals/faker-cxx)

add_executable(main Main.cpp)

target_link_libraries(main faker-cxx)
```

Since it's a git submodule you have to update the project if using it, 
`git submodule update --init --recursive`
