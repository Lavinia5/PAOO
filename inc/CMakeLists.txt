# Versiunea minimă de CMake necesară
cmake_minimum_required(VERSION 3.0)

# Numele proiectului
project(BookProject)

# Definim calea către directoarele cu fișiere de header
include_directories(inc)

# Specificăm standardul C++ necesar
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Definim executabilul și fișierele sursă
add_executable(${PROJECT_NAME}
               src/main.cpp
               src/Book.cpp)

