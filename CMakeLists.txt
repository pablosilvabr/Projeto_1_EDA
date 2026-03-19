cmake_minimum_required(VERSION 4.1)
project(Projeto_1)

set(CMAKE_CXX_STANDARD 20)

add_executable(Projeto_1 main.cpp
        utility.cpp
        utility.h
        campeonato.cpp
        campeonato.h
        jogador.cpp
        jogador.h
)

# Comando para copiar os ficheiros de texto para a pasta de execução automaticamente
file(COPY "config/equipas.txt"
        "config/nomes.txt"
        DESTINATION "${CMAKE_CURRENT_BINARY_DIR}")