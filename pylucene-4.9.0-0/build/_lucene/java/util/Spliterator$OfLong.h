#ifndef java_util_Spliterator$OfLong_H
#define java_util_Spliterator$OfLong_H

#include "java/util/Spliterator$OfPrimitive.h"

namespace java {
  namespace util {
    namespace function {
      class LongConsumer;
    }
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Spliterator$OfLong : public ::java::util::Spliterator$OfPrimitive {
    public:
      enum {
        mid_forEachRemaining_67e5affb,
        mid_tryAdvance_67e5aff7,
        mid_trySplit_ff6c8dc6,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Spliterator$OfLong(jobject obj) : ::java::util::Spliterator$OfPrimitive(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      Spliterator$OfLong(const Spliterator$OfLong& obj) : ::java::util::Spliterator$OfPrimitive(obj) {}

      void forEachRemaining(const ::java::util::function::LongConsumer &) const;
      jboolean tryAdvance(const ::java::util::function::LongConsumer &) const;
      Spliterator$OfLong trySplit() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyTypeObject PY_TYPE(Spliterator$OfLong);

    class t_Spliterator$OfLong {
    public:
      PyObject_HEAD
      Spliterator$OfLong object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Spliterator$OfLong *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Spliterator$OfLong&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Spliterator$OfLong&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
