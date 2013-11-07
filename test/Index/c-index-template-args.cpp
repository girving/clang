// RUN: c-index-test -test-print-template-args all %s | FileCheck %s
// CHECK: TypedefDecl=derived:6:22 (Definition) [template args 2] [i=0] [spelling=char] [argkind=type] [type=char] [typekind=Char_S] [i=1] [spelling=7] [argkind=integral]

struct none {};
template<class A,int b> struct base {};
typedef base<char,7> derived;
