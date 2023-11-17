cmake_minimum_required(VERSION 3.10)

project(Person VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Adăugăm directorul "tutorial" ca subdirector al proiectului.
add_subdirectory(person)

# Definim un executabil numit "Tutorial" care utilizează fișierul sursă "main.cpp".
add_executable(Person main.cpp)

# Specificăm că executabilul "Tutorial" depinde de librăria "tutorial".
target_link_libraries(Person PUBLIC person)
target_link_libraries(Person PUBLIC angajat)
target_link_libraries(Person PUBLIC student)

# Specificăm directoriile de includere pentru executabilul "Tutorial".
# Acestea includ directorul unde sunt generate fișierele de construcție
# ale proiectului și directorul "tutorial" care conține fișierele sursă
# ale subproiectului "tutorial".
target_include_directories(Person PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           "${PROJECT_SOURCE_DIR}/person"
                           "${PROJECT_SOURCE_DIR}/angajat"
                           "${PROJECT_SOURCE_DIR}/student"
                           )
