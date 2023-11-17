add_library(person person.cpp)
add_library(angajat angajat.cpp)
add_library(student student.cpp)


target_link_libraries(student PUBLIC person)
target_link_libraries(angajat PUBLIC person)