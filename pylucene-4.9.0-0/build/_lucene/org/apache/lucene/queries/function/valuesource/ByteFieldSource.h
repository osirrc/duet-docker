#ifndef org_apache_lucene_queries_function_valuesource_ByteFieldSource_H
#define org_apache_lucene_queries_function_valuesource_ByteFieldSource_H

#include "org/apache/lucene/queries/function/valuesource/FieldCacheSource.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class AtomicReaderContext;
      }
      namespace search {
        class FieldCache$ByteParser;
      }
      namespace queries {
        namespace function {
          class FunctionValues;
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

            class ByteFieldSource : public ::org::apache::lucene::queries::function::valuesource::FieldCacheSource {
            public:
              enum {
                mid_init$_5fdc3f48,
                mid_init$_03909c56,
                mid_description_14c7b5c5,
                mid_equals_290588e2,
                mid_getValues_4c566485,
                mid_hashCode_54c6a179,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ByteFieldSource(jobject obj) : ::org::apache::lucene::queries::function::valuesource::FieldCacheSource(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              ByteFieldSource(const ByteFieldSource& obj) : ::org::apache::lucene::queries::function::valuesource::FieldCacheSource(obj) {}

              ByteFieldSource(const ::java::lang::String &);
              ByteFieldSource(const ::java::lang::String &, const ::org::apache::lucene::search::FieldCache$ByteParser &);

              ::java::lang::String description() const;
              jboolean equals(const ::java::lang::Object &) const;
              ::org::apache::lucene::queries::function::FunctionValues getValues(const ::java::util::Map &, const ::org::apache::lucene::index::AtomicReaderContext &) const;
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
            extern PyTypeObject PY_TYPE(ByteFieldSource);

            class t_ByteFieldSource {
            public:
              PyObject_HEAD
              ByteFieldSource object;
              static PyObject *wrap_Object(const ByteFieldSource&);
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
