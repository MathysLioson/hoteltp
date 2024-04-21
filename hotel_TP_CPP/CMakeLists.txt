cmake_minimum_required(VERSION 3.28)
project(hotel_TP_CPP)

set(CMAKE_CXX_STANDARD 17)

add_executable(hotel_TP_CPP main.cpp
        gestionChambre/hotel/HotelManager.cpp
        gestionChambre/hotel/HotelManagerService.cpp
        gestionChambre/hotel/exception/DroitInsuffisantException.cpp
        administration/UserAPP.cpp
        administration/RoleAPP.cpp
        gestionChambre/chambre/CategorieChambre.cpp
        gestionChambre/chambre/ChambreController.cpp
        gestionChambre/chambre/ChambreDTO.cpp
        gestionChambre/chambre/ChambreEntity.cpp
        gestionChambre/chambre/ChambreRepository.cpp
        gestionChambre/chambre/ChambreService.cpp
        gestionChambre/chambre/EtatChambre.cpp
        gestionChambre/chambre/exceptions/ChambreNotFoundException.cpp
        administration/UserAPP.h
        gestionChambre/chambre/ChambreEntity.h
        gestionChambre/chambre/ChambreService.h
        gestionChambre/chambre/ChambreRepository.h
        gestionChambre/chambre/DatabaseSession.h
        gestionChambre/chambre/DatabaseSession.cpp
        gestionChambre/chambre/DatabaseSessionImpl.hpp

)


# Ajouter le répertoire d'inclusion
include_directories("C:/Program Files/boost/boost_1_85_0")

