cmake_minimum_required(VERSION 3.10)
project(HashMap C)

# Устанавливаем стандарт языка C
set(CMAKE_C_STANDARD 99)

# Указываем исходные файлы
set(SOURCES
    main.c
    hashmap/src/hashmap.c
)

# Указываем заголовочные файлы
include_directories(
    hashmap/include
)

# Создаем исполняемый файл
add_executable(HashMap ${SOURCES})
