#ifndef org_apache_lucene_queryparser_flexible_standard_processors_RemoveEmptyNonLeafQueryNodeProcessor_H
#define org_apache_lucene_queryparser_flexible_standard_processors_RemoveEmptyNonLeafQueryNodeProcessor_H

#include "org/apache/lucene/queryparser/flexible/core/processors/QueryNodeProcessorImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            class QueryNodeException;
            namespace nodes {
              class QueryNode;
            }
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace processors {

              class RemoveEmptyNonLeafQueryNodeProcessor : public ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessorImpl {
              public:
                enum {
                  mid_init$_54c6a166,
                  mid_process_6705aed7,
                  mid_preProcessNode_6705aed7,
                  mid_setChildrenOrder_4f378251,
                  mid_postProcessNode_6705aed7,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit RemoveEmptyNonLeafQueryNodeProcessor(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessorImpl(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                RemoveEmptyNonLeafQueryNodeProcessor(const RemoveEmptyNonLeafQueryNodeProcessor& obj) : ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessorImpl(obj) {}

                RemoveEmptyNonLeafQueryNodeProcessor();

                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode process(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &) const;
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
          namespace standard {
            namespace processors {
              extern PyTypeObject PY_TYPE(RemoveEmptyNonLeafQueryNodeProcessor);

              class t_RemoveEmptyNonLeafQueryNodeProcessor {
              public:
                PyObject_HEAD
                RemoveEmptyNonLeafQueryNodeProcessor object;
                static PyObject *wrap_Object(const RemoveEmptyNonLeafQueryNodeProcessor&);
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
