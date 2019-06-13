#ifndef org_apache_lucene_queryparser_flexible_standard_processors_MultiFieldQueryNodeProcessor_H
#define org_apache_lucene_queryparser_flexible_standard_processors_MultiFieldQueryNodeProcessor_H

#include "org/apache/lucene/queryparser/flexible/core/processors/QueryNodeProcessorImpl.h"

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

              class MultiFieldQueryNodeProcessor : public ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessorImpl {
              public:
                enum {
                  mid_init$_54c6a166,
                  mid_processChildren_cc04aeef,
                  mid_preProcessNode_6705aed7,
                  mid_setChildrenOrder_4f378251,
                  mid_postProcessNode_6705aed7,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit MultiFieldQueryNodeProcessor(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessorImpl(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                MultiFieldQueryNodeProcessor(const MultiFieldQueryNodeProcessor& obj) : ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessorImpl(obj) {}

                MultiFieldQueryNodeProcessor();
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
              extern PyTypeObject PY_TYPE(MultiFieldQueryNodeProcessor);

              class t_MultiFieldQueryNodeProcessor {
              public:
                PyObject_HEAD
                MultiFieldQueryNodeProcessor object;
                static PyObject *wrap_Object(const MultiFieldQueryNodeProcessor&);
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
