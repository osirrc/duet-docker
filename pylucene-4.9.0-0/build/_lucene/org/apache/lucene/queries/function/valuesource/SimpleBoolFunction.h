#ifndef org_apache_lucene_queries_function_valuesource_SimpleBoolFunction_H
#define org_apache_lucene_queries_function_valuesource_SimpleBoolFunction_H

#include "org/apache/lucene/queries/function/valuesource/BoolFunction.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class AtomicReaderContext;
      }
      namespace search {
        class IndexSearcher;
      }
      namespace queries {
        namespace function {
          namespace docvalues {
            class BoolDocValues;
          }
          class ValueSource;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
  }
  namespace util {
    class Map;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          namespace valuesource {

            class SimpleBoolFunction : public ::org::apache::lucene::queries::function::valuesource::BoolFunction {
            public:
              enum {
                mid_init$_ca78fe7a,
                mid_createWeight_1b6125ba,
                mid_description_14c7b5c5,
                mid_equals_290588e2,
                mid_getValues_ea0ab6f1,
                mid_hashCode_54c6a179,
                mid_name_14c7b5c5,
                mid_func_2223df3d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SimpleBoolFunction(jobject obj) : ::org::apache::lucene::queries::function::valuesource::BoolFunction(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              SimpleBoolFunction(const SimpleBoolFunction& obj) : ::org::apache::lucene::queries::function::valuesource::BoolFunction(obj) {}

              SimpleBoolFunction(const ::org::apache::lucene::queries::function::ValueSource &);

              void createWeight(const ::java::util::Map &, const ::org::apache::lucene::search::IndexSearcher &) const;
              ::java::lang::String description() const;
              jboolean equals(const ::java::lang::Object &) const;
              ::org::apache::lucene::queries::function::docvalues::BoolDocValues getValues(const ::java::util::Map &, const ::org::apache::lucene::index::AtomicReaderContext &) const;
              jint hashCode() const;
            };
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
      namespace queries {
        namespace function {
          namespace valuesource {
            extern PyTypeObject PY_TYPE(SimpleBoolFunction);

            class t_SimpleBoolFunction {
            public:
              PyObject_HEAD
              SimpleBoolFunction object;
              static PyObject *wrap_Object(const SimpleBoolFunction&);
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

#endif
