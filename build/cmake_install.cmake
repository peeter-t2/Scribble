# Install script for directory: /home/kasutaja/Downloads/okulardev/okular

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

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Devel")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/kasutaja/install/include/okular/core/action.h;/home/kasutaja/install/include/okular/core/annotations.h;/home/kasutaja/install/include/okular/core/area.h;/home/kasutaja/install/include/okular/core/document.h;/home/kasutaja/install/include/okular/core/fontinfo.h;/home/kasutaja/install/include/okular/core/form.h;/home/kasutaja/install/include/okular/core/generator.h;/home/kasutaja/install/include/okular/core/global.h;/home/kasutaja/install/include/okular/core/okular_export.h;/home/kasutaja/install/include/okular/core/page.h;/home/kasutaja/install/include/okular/core/pagesize.h;/home/kasutaja/install/include/okular/core/pagetransition.h;/home/kasutaja/install/include/okular/core/sound.h;/home/kasutaja/install/include/okular/core/sourcereference.h;/home/kasutaja/install/include/okular/core/textdocumentgenerator.h;/home/kasutaja/install/include/okular/core/textdocumentsettings.h;/home/kasutaja/install/include/okular/core/textpage.h;/home/kasutaja/install/include/okular/core/tile.h;/home/kasutaja/install/include/okular/core/utils.h;/home/kasutaja/install/include/okular/core/version.h;/home/kasutaja/install/include/okular/core/fileprinter.h;/home/kasutaja/install/include/okular/core/observer.h;/home/kasutaja/install/include/okular/core/settings_core.h")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/home/kasutaja/install/include/okular/core" TYPE FILE FILES
    "/home/kasutaja/Downloads/okulardev/okular/core/action.h"
    "/home/kasutaja/Downloads/okulardev/okular/core/annotations.h"
    "/home/kasutaja/Downloads/okulardev/okular/core/area.h"
    "/home/kasutaja/Downloads/okulardev/okular/core/document.h"
    "/home/kasutaja/Downloads/okulardev/okular/core/fontinfo.h"
    "/home/kasutaja/Downloads/okulardev/okular/core/form.h"
    "/home/kasutaja/Downloads/okulardev/okular/core/generator.h"
    "/home/kasutaja/Downloads/okulardev/okular/core/global.h"
    "/home/kasutaja/Downloads/okulardev/okular/core/okular_export.h"
    "/home/kasutaja/Downloads/okulardev/okular/core/page.h"
    "/home/kasutaja/Downloads/okulardev/okular/core/pagesize.h"
    "/home/kasutaja/Downloads/okulardev/okular/core/pagetransition.h"
    "/home/kasutaja/Downloads/okulardev/okular/core/sound.h"
    "/home/kasutaja/Downloads/okulardev/okular/core/sourcereference.h"
    "/home/kasutaja/Downloads/okulardev/okular/core/textdocumentgenerator.h"
    "/home/kasutaja/Downloads/okulardev/okular/core/textdocumentsettings.h"
    "/home/kasutaja/Downloads/okulardev/okular/core/textpage.h"
    "/home/kasutaja/Downloads/okulardev/okular/core/tile.h"
    "/home/kasutaja/Downloads/okulardev/okular/core/utils.h"
    "/home/kasutaja/Downloads/okulardev/okular/core/version.h"
    "/home/kasutaja/Downloads/okulardev/okular/core/fileprinter.h"
    "/home/kasutaja/Downloads/okulardev/okular/core/observer.h"
    "/home/kasutaja/Downloads/okulardev/okular/build/settings_core.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Devel")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Devel")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/kasutaja/install/include/okular/interfaces/configinterface.h;/home/kasutaja/install/include/okular/interfaces/guiinterface.h;/home/kasutaja/install/include/okular/interfaces/printinterface.h;/home/kasutaja/install/include/okular/interfaces/saveinterface.h;/home/kasutaja/install/include/okular/interfaces/viewerinterface.h")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/home/kasutaja/install/include/okular/interfaces" TYPE FILE FILES
    "/home/kasutaja/Downloads/okulardev/okular/interfaces/configinterface.h"
    "/home/kasutaja/Downloads/okulardev/okular/interfaces/guiinterface.h"
    "/home/kasutaja/Downloads/okulardev/okular/interfaces/printinterface.h"
    "/home/kasutaja/Downloads/okulardev/okular/interfaces/saveinterface.h"
    "/home/kasutaja/Downloads/okulardev/okular/interfaces/viewerinterface.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Devel")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FOREACH(file
      "$ENV{DESTDIR}/home/kasutaja/install/lib/libokularcore.so.3.0.0"
      "$ENV{DESTDIR}/home/kasutaja/install/lib/libokularcore.so.3"
      "$ENV{DESTDIR}/home/kasutaja/install/lib/libokularcore.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "/home/kasutaja/install/lib")
    ENDIF()
  ENDFOREACH()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/kasutaja/install/lib/libokularcore.so.3.0.0;/home/kasutaja/install/lib/libokularcore.so.3;/home/kasutaja/install/lib/libokularcore.so")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/home/kasutaja/install/lib" TYPE SHARED_LIBRARY FILES
    "/home/kasutaja/Downloads/okulardev/okular/build/lib/libokularcore.so.3.0.0"
    "/home/kasutaja/Downloads/okulardev/okular/build/lib/libokularcore.so.3"
    "/home/kasutaja/Downloads/okulardev/okular/build/lib/libokularcore.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}/home/kasutaja/install/lib/libokularcore.so.3.0.0"
      "$ENV{DESTDIR}/home/kasutaja/install/lib/libokularcore.so.3"
      "$ENV{DESTDIR}/home/kasutaja/install/lib/libokularcore.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "::::::::::::::::::::::::::"
           NEW_RPATH "/home/kasutaja/install/lib")
      IF(CMAKE_INSTALL_DO_STRIP)
        EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "${file}")
      ENDIF(CMAKE_INSTALL_DO_STRIP)
    ENDIF()
  ENDFOREACH()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/kasutaja/install/share/config.kcfg/okular.kcfg")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/home/kasutaja/install/share/config.kcfg" TYPE FILE FILES "/home/kasutaja/Downloads/okulardev/okular/conf/okular.kcfg")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/kasutaja/install/share/config.kcfg/okular_core.kcfg")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/home/kasutaja/install/share/config.kcfg" TYPE FILE FILES "/home/kasutaja/Downloads/okulardev/okular/conf/okular_core.kcfg")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/kasutaja/install/share/kde4/servicetypes/okularGenerator.desktop")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/home/kasutaja/install/share/kde4/servicetypes" TYPE FILE FILES "/home/kasutaja/Downloads/okulardev/okular/core/okularGenerator.desktop")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}/home/kasutaja/install/lib/kde4/okularpart.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/kasutaja/install/lib/kde4/okularpart.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}/home/kasutaja/install/lib/kde4/okularpart.so"
         RPATH "/home/kasutaja/install/lib")
  ENDIF()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/kasutaja/install/lib/kde4/okularpart.so")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/home/kasutaja/install/lib/kde4" TYPE MODULE FILES "/home/kasutaja/Downloads/okulardev/okular/build/lib/okularpart.so")
  IF(EXISTS "$ENV{DESTDIR}/home/kasutaja/install/lib/kde4/okularpart.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/kasutaja/install/lib/kde4/okularpart.so")
    FILE(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/home/kasutaja/install/lib/kde4/okularpart.so"
         OLD_RPATH "/home/kasutaja/Downloads/okulardev/okular/build/lib:"
         NEW_RPATH "/home/kasutaja/install/lib")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/home/kasutaja/install/lib/kde4/okularpart.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/kasutaja/install/share/apps/kconf_update/okular.upd")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/home/kasutaja/install/share/apps/kconf_update" TYPE FILE FILES "/home/kasutaja/Downloads/okulardev/okular/okular.upd")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/kasutaja/install/share/kde4/services/okular_part.desktop")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/home/kasutaja/install/share/kde4/services" TYPE FILE FILES "/home/kasutaja/Downloads/okulardev/okular/okular_part.desktop")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/kasutaja/install/share/apps/okular/part.rc;/home/kasutaja/install/share/apps/okular/part-viewermode.rc")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/home/kasutaja/install/share/apps/okular" TYPE FILE FILES
    "/home/kasutaja/Downloads/okulardev/okular/part.rc"
    "/home/kasutaja/Downloads/okulardev/okular/part-viewermode.rc"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/kasutaja/install/lib/cmake/Okular/OkularConfig.cmake;/home/kasutaja/install/lib/cmake/Okular/OkularConfigVersion.cmake")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/home/kasutaja/install/lib/cmake/Okular" TYPE FILE FILES
    "/home/kasutaja/Downloads/okulardev/okular/OkularConfig.cmake"
    "/home/kasutaja/Downloads/okulardev/okular/build/OkularConfigVersion.cmake"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/home/kasutaja/Downloads/okulardev/okular/build/active/cmake_install.cmake")
  INCLUDE("/home/kasutaja/Downloads/okulardev/okular/build/ui/cmake_install.cmake")
  INCLUDE("/home/kasutaja/Downloads/okulardev/okular/build/shell/cmake_install.cmake")
  INCLUDE("/home/kasutaja/Downloads/okulardev/okular/build/generators/cmake_install.cmake")
  INCLUDE("/home/kasutaja/Downloads/okulardev/okular/build/tests/cmake_install.cmake")
  INCLUDE("/home/kasutaja/Downloads/okulardev/okular/build/doc/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

IF(CMAKE_INSTALL_COMPONENT)
  SET(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
ELSE(CMAKE_INSTALL_COMPONENT)
  SET(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
ENDIF(CMAKE_INSTALL_COMPONENT)

FILE(WRITE "/home/kasutaja/Downloads/okulardev/okular/build/${CMAKE_INSTALL_MANIFEST}" "")
FOREACH(file ${CMAKE_INSTALL_MANIFEST_FILES})
  FILE(APPEND "/home/kasutaja/Downloads/okulardev/okular/build/${CMAKE_INSTALL_MANIFEST}" "${file}\n")
ENDFOREACH(file)
