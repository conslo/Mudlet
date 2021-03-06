############################################################################
#    Copyright (C) 2014 by Ahmed Charles - acharles@outlook.com            #
#                                                                          #
#    This program is free software; you can redistribute it and/or modify  #
#    it under the terms of the GNU General Public License as published by  #
#    the Free Software Foundation; either version 2 of the License, or     #
#    (at your option) any later version.                                   #
#                                                                          #
#    This program is distributed in the hope that it will be useful,       #
#    but WITHOUT ANY WARRANTY; without even the implied warranty of        #
#    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         #
#    GNU General Public License for more details.                          #
#                                                                          #
#    You should have received a copy of the GNU General Public License     #
#    along with this program; if not, write to the                         #
#    Free Software Foundation, Inc.,                                       #
#    59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             #
############################################################################

SET(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../cmake ${CMAKE_MODULE_PATH})

SET(mudlet_RCCS mudlet_alpha.qrc)

SET(mudlet_SRCS
    ActionUnit.cpp
    AliasUnit.cpp
    ctelnet.cpp
    dlgAboutDialog.cpp
    dlgActionMainArea.cpp
    dlgAliasMainArea.cpp
    dlgColorTrigger.cpp
    dlgComposer.cpp
    dlgConnectionProfiles.cpp
    dlgIRC.cpp
    dlgKeysMainArea.cpp
    dlgMapper.cpp
    dlgNotepad.cpp
    dlgOptionsAreaAction.cpp
    dlgOptionsAreaAlias.cpp
    dlgOptionsAreaScripts.cpp
    dlgOptionsAreaTimers.cpp
    dlgOptionsAreaTriggers.cpp
    dlgPackageExporter.cpp
    dlgProfilePreferences.cpp
    dlgRoomExits.cpp
    dlgScriptsMainArea.cpp
    dlgSearchArea.cpp
    dlgSourceEditorArea.cpp
    dlgSystemMessageArea.cpp
    dlgTimersMainArea.cpp
    dlgTriggerEditor.cpp
    dlgTriggerPatternEdit.cpp
    dlgTriggersMainArea.cpp
    dlgVarsMainArea.cpp
    EAction.cpp
    exitstreewidget.cpp
    FontManager.cpp
    glwidget.cpp
    Host.cpp
    HostManager.cpp
    HostPool.cpp
    KeyUnit.cpp
    LuaInterface.cpp
    main.cpp
    mudlet.cpp
    ScriptUnit.cpp
    T2DMap.cpp
    TAction.cpp
    TAlias.cpp
    TArea.cpp
    TBuffer.cpp
    TCommandLine.cpp
    TConsole.cpp
    TDebug.cpp
    TEasyButtonBar.cpp
    TFlipButton.cpp
    TForkedProcess.cpp
    THighlighter.cpp
    TimerUnit.cpp
    TKey.cpp
    TLabel.cpp
    TLuaInterpreter.cpp
    TMap.cpp
    TriggerUnit.cpp
    TRoom.cpp
    TRoomDB.cpp
    TScript.cpp
    TSplitter.cpp
    TSplitterHandle.cpp
    TTextEdit.cpp
    TTimer.cpp
    TToolBar.cpp
    TTreeWidget.cpp
    TTreeWidgetItem.cpp
    TTrigger.cpp
    TVar.cpp
    VarUnit.cpp
    XMLexport.cpp
    XMLimport.cpp
)

# This is for compiled UI files, not those used at runtime though the resource file.
SET(mudlet_UIS
    ui/about_dialog.ui
    ui/actions_main_area.ui
    ui/aliases_main_area.ui
    ui/color_trigger.ui
    ui/composer.ui
    ui/connection_profiles.ui
    ui/dlgPackageExporter.ui
    ui/extended_search_area.ui
    ui/irc.ui
    ui/keybindings_main_area.ui
    ui/main_window.ui
    ui/mapper.ui
    ui/notes_editor.ui
    ui/options_area_actions.ui
    ui/options_area_aliases.ui
    ui/options_area_scripts.ui
    ui/options_area_timers.ui
    ui/options_area_triggers.ui
    ui/profile_preferences.ui
    ui/room_exits.ui
    ui/scripts_main_area.ui
    ui/source_editor_area.ui
    ui/system_message_area.ui
    ui/timers_main_area.ui
    ui/triggers_main_area.ui
    ui/trigger_editor.ui
    ui/trigger_pattern_edit.ui
    ui/vars_main_area.ui
)

SET(mudlet_MOC_HDRS 
    ctelnet.h
    dlgAboutDialog.h
    dlgActionMainArea.h
    dlgAliasMainArea.h
    dlgColorTrigger.h
    dlgComposer.h
    dlgConnectionProfiles.h
    dlgIRC.h
    dlgKeysMainArea.h
    dlgMapper.h
    dlgNotepad.h
    dlgOptionsAreaAction.h
    dlgOptionsAreaAlias.h
    dlgOptionsAreaScripts.h
    dlgOptionsAreaTimers.h
    dlgOptionsAreaTriggers.h
    dlgPackageExporter.h
    dlgProfilePreferences.h
    dlgRoomExits.h
    dlgScriptsMainArea.h
    dlgSearchArea.h
    dlgSourceEditorArea.h
    dlgSystemMessageArea.h
    dlgTimersMainArea.h
    dlgTriggerEditor.h
    dlgTriggerPatternEdit.h
    dlgTriggersMainArea.h
    dlgVarsMainArea.h
    EAction.h
    exitstreewidget.h
    glwidget.h
    mudlet.h
    T2DMap.h
    TCommandLine.h
    TConsole.h
    TEasyButtonBar.h
    TForkedProcess.h
    THighlighter.h
    TLabel.h
    TLuaInterpreter.h
    TSplitter.h
    TTextEdit.h
    TToolBar.h
    TTreeWidget.h
)

SET(mudlet_HDRS
    ActionUnit.h
    AliasUnit.h
    FontManager.h
    Host.h
    HostManager.h
    HostPool.h
    KeyUnit.h
    LuaInterface.h
    pre_guard.h
    post_guard.h
    ScriptUnit.h
    TAction.h
    TAlias.h
    TArea.h
    TAstar.h
    TBuffer.h
    TDebug.h
    TEvent.h
    TFlipButton.h
    TimerUnit.h
    TKey.h
    TMap.h
    TMatchState.h
    Tree.h
    TriggerUnit.h
    TRoom.h
    TRoomDB.h
    TScript.h
    TSplitterHandle.h
    TTimer.h
    TTreeWidgetItem.h
    TTrigger.h
    TVar.h
    VarUnit.h
    XMLexport.h
    XMLimport.h
)

IF(MSVC)
  SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -MP") # parallel builds
  SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -wd4305") # '=' : truncation from 'double' to 'float'
  SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -wd4309") # 'initializing' : truncation of constant value
  SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -wd4996") # deprecation
ELSE(MSVC)
  SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC")
  SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-deprecated")
ENDIF(MSVC)

SET(PCRE_DIR "${PROJECT_SOURCE_DIR}/.." CACHE PATH "PCRE install directory.")

SET(YAJL_DIR "${PROJECT_SOURCE_DIR}/.." CACHE PATH "YAJL install directory.")

SET(HUNSPELL_DIR "${PROJECT_SOURCE_DIR}/.." CACHE PATH "HUNSPELL install directory.")

SET(ZIP_DIR "${PROJECT_SOURCE_DIR}/.." CACHE PATH "ZIP install directory.")

IF(EXISTS "${PROJECT_SOURCE_DIR}/../include/lua.h")
  SET(LUA_INCLUDE_DIR_TEMP "${PROJECT_SOURCE_DIR}/../include")
  GET_FILENAME_COMPONENT(LUA_INCLUDE_DIR ${LUA_INCLUDE_DIR_TEMP} ABSOLUTE CACHE)
  IF(EXISTS "${PROJECT_SOURCE_DIR}/../lib/lualib.lib")
    SET(LUA_LIBRARY_RELEASE_TEMP "${PROJECT_SOURCE_DIR}/../lib/lualib.lib")
    GET_FILENAME_COMPONENT(LUA_LIBRARY_RELEASE ${LUA_LIBRARY_RELEASE_TEMP} ABSOLUTE CACHE)
  ENDIF()
  IF(EXISTS "${PROJECT_SOURCE_DIR}/../lib/lualibd.lib")
    SET(LUA_LIBRARY_DEBUG_TEMP "${PROJECT_SOURCE_DIR}/../lib/lualibd.lib")
    GET_FILENAME_COMPONENT(LUA_LIBRARY_DEBUG ${LUA_LIBRARY_DEBUG_TEMP} ABSOLUTE CACHE)
  ENDIF()
  IF(LUA_LIBRARY_DEBUG AND LUA_LIBRARY_RELEASE)
    SET(LUA_LIBRARY optimized ${LUA_LIBRARY_RELEASE} debug ${LUA_LIBRARY_DEBUG} )
  ELSEIF(LUA_LIBRARY_RELEASE)
    SET(LUA_LIBRARY ${LUA_LIBRARY_RELEASE} )
  ELSEIF(LUA_LIBRARY_DEBUG)
    SET(LUA_LIBRARY ${LUA_LIBRARY_DEBUG} )
  ENDIF()
ENDIF()

IF(EXISTS "${PROJECT_SOURCE_DIR}/../include/zlib.h")
  SET(ZLIB_INCLUDE_DIR_TEMP "${PROJECT_SOURCE_DIR}/../include")
  GET_FILENAME_COMPONENT(ZLIB_INCLUDE_DIR ${ZLIB_INCLUDE_DIR_TEMP} ABSOLUTE CACHE)
  SET(ZLIB_ROOT "${PROJECT_SOURCE_DIR}/..")
  IF(EXISTS "${PROJECT_SOURCE_DIR}/../lib/zlibstat.lib")
    SET(ZLIB_LIBRARY_RELEASE_TEMP "${PROJECT_SOURCE_DIR}/../lib/zlibstat.lib")
    GET_FILENAME_COMPONENT(ZLIB_LIBRARY_RELEASE ${ZLIB_LIBRARY_RELEASE_TEMP} ABSOLUTE CACHE)
  ENDIF()
  IF(EXISTS "${PROJECT_SOURCE_DIR}/../lib/zlibstatd.lib")
    SET(ZLIB_LIBRARY_DEBUG_TEMP "${PROJECT_SOURCE_DIR}/../lib/zlibstatd.lib")
    GET_FILENAME_COMPONENT(ZLIB_LIBRARY_DEBUG ${ZLIB_LIBRARY_DEBUG_TEMP} ABSOLUTE CACHE)
  ENDIF()
  IF(ZLIB_LIBRARY_DEBUG AND ZLIB_LIBRARY_RELEASE)
    SET(ZLIB_LIBRARY optimized ${ZLIB_LIBRARY_RELEASE} debug ${ZLIB_LIBRARY_DEBUG} )
  ELSEIF(ZLIB_LIBRARY_RELEASE)
    SET(ZLIB_LIBRARY ${ZLIB_LIBRARY_RELEASE} )
  ELSEIF(ZLIB_LIBRARY_DEBUG)
    SET(ZLIB_LIBRARY ${ZLIB_LIBRARY_DEBUG} )
  ENDIF()
ENDIF()

FIND_PACKAGE(Qt5Core REQUIRED)
FIND_PACKAGE(Qt5Multimedia REQUIRED)
FIND_PACKAGE(Qt5Network REQUIRED)
FIND_PACKAGE(Qt5OpenGL REQUIRED)
FIND_PACKAGE(Qt5UiTools REQUIRED)
FIND_PACKAGE(Qt5Widgets REQUIRED)

FIND_PACKAGE(OpenGL REQUIRED)
FIND_PACKAGE(Lua51 REQUIRED)
FIND_PACKAGE(ZLIB REQUIRED)
FIND_PACKAGE(PCRE REQUIRED)
FIND_PACKAGE(YAJL REQUIRED)
FIND_PACKAGE(HUNSPELL REQUIRED)
FIND_PACKAGE(ZIP REQUIRED)

SET(Boost_USE_STATIC_LIBS ON)
FIND_PACKAGE(Boost 1.44 COMPONENTS graph)

SET(LUA_CPP OFF CACHE BOOL "Lua is compiled as C++ rather than C")

IF(LUA_CPP)
  ADD_DEFINITIONS(-DLUA_CPP)
  SET(mudlet_SRCS ${mudlet_SRCS} lua_yajl.cpp)
ELSE(LUA_CPP)
  SET(mudlet_SRCS ${mudlet_SRCS} lua_yajl.c)
ENDIF(LUA_CPP)

ADD_SUBDIRECTORY(irc)

ADD_DEFINITIONS(-DAPP_VERSION="${APP_VERSION}" -DAPP_BUILD="${APP_BUILD}" -DAPP_TARGET="${APP_TARGET}")

SET(CMAKE_INCLUDE_CURRENT_DIR ON)
INCLUDE_DIRECTORIES(
    ${Qt5Core_INCLUDE_DIRS}
    ${Qt5Widgets_INCLUDE_DIRS}
    ${Qt5Network_INCLUDE_DIRS}
    ${Qt5OpenGL_INCLUDE_DIRS}
    ${Qt5Multimedia_INCLUDE_DIRS}
    ${Qt5UiTools_INCLUDE_DIRS}
    ${Boost_INCLUDE_DIRS}
    ${CMAKE_CURRENT_SOURCE_DIR}/irc/include
    ${HUNSPELL_INCLUDE_DIR}
    ${LUA_INCLUDE_DIR}
    ${TERRA_INCLUDE_DIR}
    ${PCRE_INCLUDE_DIR}
    ${YAJL_INCLUDE_DIR}
    ${ZIP_INCLUDE_DIR}
    ${ZLIB_INCLUDE_DIR}
)

QT5_WRAP_UI(mudlet_UIS_H ${mudlet_UIS})
QT5_WRAP_CPP(mudlet_MOC_SRCS ${mudlet_MOC_HDRS})
QT5_ADD_RESOURCES(mudlet_RCC_SRCS ${mudlet_RCCS})

ADD_EXECUTABLE(mudlet WIN32
    ${mudlet_SRCS}
    ${mudlet_MOC_SRCS}
    ${mudlet_RCC_SRCS}
    ${mudlet_HDRS}
    ${mudlet_UIS_H}
    ${mudlet_MOC_HDRS}
)

TARGET_LINK_LIBRARIES(mudlet
    ${Qt5Core_LIBRARIES}
    ${Qt5Widgets_LIBRARIES}
    ${Qt5Network_LIBRARIES}
    ${Qt5Multimedia_LIBRARIES}
    ${Qt5OpenGL_LIBRARIES}
    ${Qt5UiTools_LIBRARIES}
    ${Boost_LIBRARIES}
    ${HUNSPELL_LIBRARIES}
    ${LUA_LIBRARIES}
    ${OPENGL_LIBRARIES}
    ${PCRE_LIBRARIES}
    ${YAJL_LIBRARIES}
    ${ZIP_LIBRARIES}
    ${ZLIB_LIBRARIES}
    irccqt
)
