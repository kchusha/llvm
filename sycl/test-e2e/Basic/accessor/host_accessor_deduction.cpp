// RUN: %clangxx -fsycl -fsycl-targets=%sycl_triple -Daccessor_new_api_test %S/Inputs/host_accessor.cpp -o %t.out
// RUN: %{run} %t.out
