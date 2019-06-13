#ifndef org_apache_lucene_queryparser_flexible_core_nodes_AndQueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_AndQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/BooleanQueryNode.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {
              class QueryNode;
            }
            namespace parser {
              class EscapeQuerySyntax;
            }
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
    class CharSequence;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {

              class AndQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::BooleanQueryNode {
              public:
                enum {
                  mid_init$_1fde8fc3,
                  mid_toQueryString_99b8dfe1,
                  mid_toString_14c7b5c5,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AndQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::BooleanQueryNode(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                AndQueryNode(const AndQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::BooleanQueryNode(obj) {}

                AndQueryNode(const ::java::util::List &);

                ::java::lang::CharSequence toQueryString(const ::org::apache::lucene::queryparser::flexible::core::parser::EscapeQuerySyntax &) const;
                ::java::lang::String toString() const;
              };
            }
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {
              extern PyTypeObject PY_TYPE(AndQueryNode);

              class t_AndQueryNode {
              public:
                PyObject_HEAD
                AndQueryNode object;
                static PyObject *wrap_Object(const AndQueryNode&);
                static PyObject *wrap_jobject(const jobject&);
                static void install(PyObject *module);
                static void initialize(PyObject *module);
              };
            }
          }
        }
      }
    }
  }
}

#endif
