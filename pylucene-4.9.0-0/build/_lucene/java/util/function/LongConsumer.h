#ifndef java_util_function_LongConsumer_H
#define java_util_function_LongConsumer_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace function {

      class LongConsumer : public ::java::lang::Object {
      public:
        enum {
          mid_accept_0ee6df2f,
          mid_andThen_5da49ae3,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit LongConsumer(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL)
            env->getClass(initializeClass);
        }
        LongConsumer(const LongConsumer& obj) : ::java::lang::Object(obj) {}

        void accept(jlong) const;
        LongConsumer andThen(const LongConsumer &) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace function {
      extern PyTypeObject PY_TYPE(LongConsumer);

      class t_LongConsumer {
      public:
        PyObject_HEAD
        LongConsumer object;
        static PyObject *wrap_Object(const LongConsumer&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
