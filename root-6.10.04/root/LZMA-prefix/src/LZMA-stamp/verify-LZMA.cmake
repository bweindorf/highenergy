# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

if("/home/brandon/Projects/root-6.10.04/core/lzma/src/xz-5.2.1.tar.gz" STREQUAL "")
  message(FATAL_ERROR "LOCAL can't be empty")
endif()

if(NOT EXISTS "/home/brandon/Projects/root-6.10.04/core/lzma/src/xz-5.2.1.tar.gz")
  message(FATAL_ERROR "File not found: /home/brandon/Projects/root-6.10.04/core/lzma/src/xz-5.2.1.tar.gz")
endif()

if("MD5" STREQUAL "")
  message(WARNING "File will not be verified since no URL_HASH specified")
  return()
endif()

if("3e44c766c3fb4f19e348e646fcd5778a" STREQUAL "")
  message(FATAL_ERROR "EXPECT_VALUE can't be empty")
endif()

message(STATUS "verifying file...
     file='/home/brandon/Projects/root-6.10.04/core/lzma/src/xz-5.2.1.tar.gz'")

file("MD5" "/home/brandon/Projects/root-6.10.04/core/lzma/src/xz-5.2.1.tar.gz" actual_value)

if(NOT "${actual_value}" STREQUAL "3e44c766c3fb4f19e348e646fcd5778a")
  message(FATAL_ERROR "error: MD5 hash of
  /home/brandon/Projects/root-6.10.04/core/lzma/src/xz-5.2.1.tar.gz
does not match expected value
  expected: '3e44c766c3fb4f19e348e646fcd5778a'
    actual: '${actual_value}'
")
endif()

message(STATUS "verifying file... done")
