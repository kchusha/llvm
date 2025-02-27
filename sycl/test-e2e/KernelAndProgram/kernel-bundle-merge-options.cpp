// RUN: %{build} -o %t.out %debug_option
// RUN: env SYCL_PI_TRACE=-1 %GPU_RUN_PLACEHOLDER %t.out %GPU_CHECK_PLACEHOLDER
// REQUIRES: gpu
// UNSUPPORTED: hip

// Debug option -g is not passed to device code compiler when CL-style driver
// is used and /DEBUG options is passed.
// XFAIL: cl_options

#include "kernel-bundle-merge-options.hpp"

// CHECK: piProgramBuild
// CHECK-NEXT: <unknown>
// CHECK-NEXT: <unknown>
// CHECK-NEXT: <unknown>
// CHECK-NEXT: <const char *>:{{.*}}-g

// TODO: Uncomment when build options are properly passed to compile and link
//       commands for kernel_bundle
// xCHECK: piProgramCompile(
// xCHECK-NEXT: <unknown>
// xCHECK-NEXT: <unknown>
// xCHECK-NEXT: <unknown>
// xCHECK-NEXT: <const char *>:{{.*}}-g
// xCHECK: piProgramLink(
// xCHECK-NEXT: <unknown>
// xCHECK-NEXT: <unknown>
// xCHECK-NEXT: <unknown>
// xCHECK-NEXT: <const char *>:{{.*}}-g
