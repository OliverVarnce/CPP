cmake_minimum_required (VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)

set (BIN "vampireRabbits")

set (SRC "main.cpp"
        "src/calc.cpp"
        "src/create.cpp"
        "src/doings.cpp"
        "src/insert.cpp"
        "src/isNum.cpp"
        "src/isStr.cpp")

project (vampireRabbits)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/..")

add_executable (${BIN} ${SRC})