# Install script for directory: /home/kasutaja/Downloads/okulardev/okular/ui/data

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/home/kasutaja/install")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/kasutaja/install/share/apps/okular/tools.xml")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/home/kasutaja/install/share/apps/okular" TYPE FILE FILES "/home/kasutaja/Downloads/okulardev/okular/ui/data/tools.xml")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/kasutaja/install/share/apps/okular/pics/tool-base-okular.png;/home/kasutaja/install/share/apps/okular/pics/tool-highlighter-okular-colorizable.png;/home/kasutaja/install/share/apps/okular/pics/tool-ink-okular-colorizable.png;/home/kasutaja/install/share/apps/okular/pics/tool-note.png;/home/kasutaja/install/share/apps/okular/pics/tool-note-okular-colorizable.png;/home/kasutaja/install/share/apps/okular/pics/tool-note-inline.png;/home/kasutaja/install/share/apps/okular/pics/tool-note-inline-okular-colorizable.png")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/home/kasutaja/install/share/apps/okular/pics" TYPE FILE FILES
    "/home/kasutaja/Downloads/okulardev/okular/ui/data/tool-base-okular.png"
    "/home/kasutaja/Downloads/okulardev/okular/ui/data/tool-highlighter-okular-colorizable.png"
    "/home/kasutaja/Downloads/okulardev/okular/ui/data/tool-ink-okular-colorizable.png"
    "/home/kasutaja/Downloads/okulardev/okular/ui/data/tool-note.png"
    "/home/kasutaja/Downloads/okulardev/okular/ui/data/tool-note-okular-colorizable.png"
    "/home/kasutaja/Downloads/okulardev/okular/ui/data/tool-note-inline.png"
    "/home/kasutaja/Downloads/okulardev/okular/ui/data/tool-note-inline-okular-colorizable.png"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/kasutaja/install/share/apps/okular/pics/checkmark.png;/home/kasutaja/install/share/apps/okular/pics/circle.png;/home/kasutaja/install/share/apps/okular/pics/comment.png;/home/kasutaja/install/share/apps/okular/pics/cross.png;/home/kasutaja/install/share/apps/okular/pics/help.png;/home/kasutaja/install/share/apps/okular/pics/insert.png;/home/kasutaja/install/share/apps/okular/pics/key.png;/home/kasutaja/install/share/apps/okular/pics/newparagraph.png;/home/kasutaja/install/share/apps/okular/pics/note.png;/home/kasutaja/install/share/apps/okular/pics/paperclip.png;/home/kasutaja/install/share/apps/okular/pics/paragraph.png;/home/kasutaja/install/share/apps/okular/pics/pushpin.png;/home/kasutaja/install/share/apps/okular/pics/rightarrow.png;/home/kasutaja/install/share/apps/okular/pics/rightpointer.png;/home/kasutaja/install/share/apps/okular/pics/star.png;/home/kasutaja/install/share/apps/okular/pics/uparrow.png;/home/kasutaja/install/share/apps/okular/pics/upleftarrow.png")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/home/kasutaja/install/share/apps/okular/pics" TYPE FILE FILES
    "/home/kasutaja/Downloads/okulardev/okular/ui/data/checkmark.png"
    "/home/kasutaja/Downloads/okulardev/okular/ui/data/circle.png"
    "/home/kasutaja/Downloads/okulardev/okular/ui/data/comment.png"
    "/home/kasutaja/Downloads/okulardev/okular/ui/data/cross.png"
    "/home/kasutaja/Downloads/okulardev/okular/ui/data/help.png"
    "/home/kasutaja/Downloads/okulardev/okular/ui/data/insert.png"
    "/home/kasutaja/Downloads/okulardev/okular/ui/data/key.png"
    "/home/kasutaja/Downloads/okulardev/okular/ui/data/newparagraph.png"
    "/home/kasutaja/Downloads/okulardev/okular/ui/data/note.png"
    "/home/kasutaja/Downloads/okulardev/okular/ui/data/paperclip.png"
    "/home/kasutaja/Downloads/okulardev/okular/ui/data/paragraph.png"
    "/home/kasutaja/Downloads/okulardev/okular/ui/data/pushpin.png"
    "/home/kasutaja/Downloads/okulardev/okular/ui/data/rightarrow.png"
    "/home/kasutaja/Downloads/okulardev/okular/ui/data/rightpointer.png"
    "/home/kasutaja/Downloads/okulardev/okular/ui/data/star.png"
    "/home/kasutaja/Downloads/okulardev/okular/ui/data/uparrow.png"
    "/home/kasutaja/Downloads/okulardev/okular/ui/data/upleftarrow.png"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/kasutaja/install/share/apps/okular/pics/stamps.svg")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/home/kasutaja/install/share/apps/okular/pics" TYPE FILE FILES "/home/kasutaja/Downloads/okulardev/okular/ui/data/stamps.svg")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/home/kasutaja/Downloads/okulardev/okular/build/ui/data/icons/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

