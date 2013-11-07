// RUN: c-index-test -test-load-source all %s | FileCheck %s
// CHECK: c-index-default-args.cpp:6:6: FunctionDecl=foo:6:6 Extent=[6:1 - 6:20]
// CHECK: c-index-default-args.cpp:6:14: ParmDecl=a:6:14 (Definition) DefaultExtent=[6:18 - 6:19] Extent=[6:10 - 6:19]
// CHECK: c-index-default-args.cpp:6:18: IntegerLiteral= Extent=[6:18 - 6:19]

void foo(int a = 7);
