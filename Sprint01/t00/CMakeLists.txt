cmake_minimum_required (VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)

set (BIN "simpleSort")

set (SRC "main.cpp"
        "src/arrInsert.cpp"
        "src/arrPrint.cpp"
        "src/arrSort.cpp")

project (simpleSort)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/..")

add_executable (${BIN} ${SRC})