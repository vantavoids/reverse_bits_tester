cmake_minimum_required(VERSION 3.5.0)
project(reverse_bits_enfers VERSION 0.1.0 LANGUAGES C)

add_executable(reverse_bits_enfers src/main.c src/rb_enfers.c reverse_bits.c)

