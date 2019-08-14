

set(command "/usr/bin/cmake;-Dinstall_dir=/home/brandon/Projects/root-6.10.04/root;-Dsource_dir=/home/brandon/Projects/root-6.10.04/root/TBB-prefix/src/TBB;-P;/home/brandon/Projects/root-6.10.04/cmake/scripts/InstallTBB.cmake")
execute_process(
  COMMAND ${command}
  RESULT_VARIABLE result
  OUTPUT_FILE "/home/brandon/Projects/root-6.10.04/root/TBB-prefix/src/TBB-stamp/TBB-install-out.log"
  ERROR_FILE "/home/brandon/Projects/root-6.10.04/root/TBB-prefix/src/TBB-stamp/TBB-install-err.log"
  )
if(result)
  set(msg "Command failed: ${result}\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  set(msg "${msg}\nSee also\n  /home/brandon/Projects/root-6.10.04/root/TBB-prefix/src/TBB-stamp/TBB-install-*.log")
  message(FATAL_ERROR "${msg}")
else()
  set(msg "TBB install command succeeded.  See also /home/brandon/Projects/root-6.10.04/root/TBB-prefix/src/TBB-stamp/TBB-install-*.log")
  message(STATUS "${msg}")
endif()
