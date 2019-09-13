# This file is configured at cmake time, and loaded at cpack time.
# To pass variables to cpack from cmake, they must be configured
# in this file.

if(CPACK_GENERATOR MATCHES "NSIS")
  # There is a bug in NSI that does not handle full unix paths properly. Make
  # sure there is at least one set of four (4) backlasshes.
  set(CPACK_NSIS_MUI_ICON "/home/brandon/Projects/root-6.10.04\\icons\\RootIcon.ico")
  set(CPACK_NSIS_MUI_UNIICON "/home/brandon/Projects/root-6.10.04\\icons\\RootIcon.ico")
  set(CPACK_NSIS_DISPLAY_NAME "ROOT 6.10.04")
  set(CPACK_NSIS_PACKAGE_NAME "ROOT 6.10.04")
  set(CPACK_NSIS_HELP_LINK "http:\\\\root.cern.ch")
  set(CPACK_NSIS_URL_INFO_ABOUT "http:\\\\root.cern.ch\\drupal\\content\\about")
  set(CPACK_NSIS_CONTACT "roottalk@cern.ch")
  set(CPACK_NSIS_MODIFY_PATH ON)
  set(CPACK_NSIS_INSTALL_ROOT "C:")
  # Register .root file type
  set(CPACK_NSIS_EXTRA_INSTALL_COMMANDS "
      WriteRegStr HKCR '.root' '' 'RootFile'
      WriteRegStr HKCR 'RootFile' '' 'ROOT Data File'
      WriteRegStr HKCR 'RootFile\\shell' '' 'open'
      WriteRegStr HKCR 'RootFile\\shell\\DefaultIcon' '' '$INSTDIR\\icons\\RootIcon.ico'
      WriteRegStr HKCR 'RootFile\\shell\\open\\command' '' \\
                       '$INSTDIR\\bin\\root.exe -l \"%1\"  \"$INSTDIR\\macros\\fileopen.C\"'
     ")
  set(CPACK_NSIS_EXTRA_UNINSTALL_COMMANDS "
      DeleteRegKey HKCR '.root'
      DeleteRegKey HKCR 'RootFile'
     ")
else()
  set(CPACK_INCLUDE_TOPLEVEL_DIRECTORY 0)
  set(CPACK_PACKAGING_INSTALL_PREFIX "/root/")
endif()


if("${CPACK_GENERATOR}" STREQUAL "PackageMaker")
  set(CPACK_PACKAGING_INSTALL_PREFIX "/${CPACK_PACKAGE_INSTALL_DIRECTORY}")
  set(CPACK_PACKAGE_DEFAULT_LOCATION "/Applications")
endif()