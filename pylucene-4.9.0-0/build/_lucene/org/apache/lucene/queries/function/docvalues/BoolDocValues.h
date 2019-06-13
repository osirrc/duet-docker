#ifndef org_apache_lucene_queries_function_docvalues_BoolDocValues_H
#define org_apache_lucene_queries_function_docvalues_BoolDocValues_H

#include "org/apache/lucene/queries/function/FunctionValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          class FunctionValues$ValueFiller;
          class ValueSource;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          namespace docvalues {

            class BoolDocValues : public ::org::apache::lucene::queries::function::FunctionValues {
            public:
              enum {
                mid_init$_ca78fe7a,
                mid_boolVal_39c7bd30,
                mid_byteVal_39c7bd28,
                mid_doubleVal_39c7bd2e,
                mid_floatVal_39c7bd2c,
                mid_getValueFiller_7731f0bd,
                mid_intVal_39c7bd23,
                mid_longVal_39c7bd20,
                mid_objectVal_29be6a55,
                mid_shortVal_39c7bd39,
                mid_strVal_141401b3,
                mid_toString_141401b3,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit BoolDocValues(jobject obj) : ::org::apache::lucene::queries::function::FunctionValues(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              BoolDocValues(const BoolDocValues& obj) : ::org::apache::lucene::queries::function::FunctionValues(obj) {}

              BoolDocValues(const ::org::apache::lucene::queries::function::ValueSource &);

              jboolean boolVal(jint) const;
              jbyte byteVal(jint) const;
              jdouble doubleVal(jint) const;
              jfloat floatVal(jint) const;
              ::org::apache::lucene::queries::function::FunctionValues$ValueFiller getValueFiller() const;
              jint intVal(jint) const;
              jlong longVal(jint) const;
              ::java::lang::Object objectVal(jint) const;
              jshort shortVal(jint) const;
              ::java::lang::String strVal(jint) const;
              ::java::lang::String toString(jint) const;
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
          namespace docvalues {
            extern PyTypeObject PY_TYPE(BoolDocValues);

            class t_BoolDocValues {
            public:
              PyObject_HEAD
              BoolDocValues object;
              static PyObject *wrap_Object(const BoolDocValues&);
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
