#ifndef org_apache_lucene_queryparser_flexible_core_processors_QueryNodeProcessorImpl_H
#define org_apache_lucene_queryparser_flexible_core_processors_QueryNodeProcessorImpl_H

#include "java/lang/Object.h"

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
            namespace config {
              class QueryConfigHandler;
            }
            namespace processors {
              class QueryNodeProcessor;
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
          namespace core {
            namespace processors {

              class QueryNodeProcessorImpl : public ::java::lang::Object {
              public:
                enum {
                  mid_init$_54c6a166,
                  mid_init$_0b1f7132,
                  mid_getQueryConfigHandler_3636d8c3,
                  mid_process_6705aed7,
                  mid_setQueryConfigHandler_0b1f7132,
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

                explicit QueryNodeProcessorImpl(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                QueryNodeProcessorImpl(const QueryNodeProcessorImpl& obj) : ::java::lang::Object(obj) {}

                QueryNodeProcessorImpl();
                QueryNodeProcessorImpl(const ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler &);

                ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler getQueryConfigHandler() const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode process(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &) const;
                void setQueryConfigHandler(const ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler &) const;
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
            namespace processors {
              extern PyTypeObject PY_TYPE(QueryNodeProcessorImpl);

              class t_QueryNodeProcessorImpl {
              public:
                PyObject_HEAD
                QueryNodeProcessorImpl object;
                static PyObject *wrap_Object(const QueryNodeProcessorImpl&);
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
