cmake_minimum_required(VERSION 2.6)

                

#Déclaration du projet

project(PingChat)



#Génération de la liste des fichiers sources

file(

        GLOB_RECURSE

        source_files

        src/*

)



#Déclaration de l'exécutable

add_executable(

        ${source_files}

)
