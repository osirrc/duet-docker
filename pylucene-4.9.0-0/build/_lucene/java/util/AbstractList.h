#ifndef java_util_AbstractList_H
#define java_util_AbstractList_H

#include "java/util/AbstractCollection.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
  }
  namespace util {
    class ListIterator;
    class List;
    class Collection;
    class Iterator;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class AbstractList : public ::java::util::AbstractCollection {
    public:
      enum {
        mid_add_290588e2,
        mid_add_f7cd74a4,
        mid_addAll_006cd2b7,
        mid_clear_54c6a166,
        mid_equals_290588e2,
        mid_get_29be6a55,
        mid_hashCode_54c6a179,
        mid_indexOf_290588f1,
        mid_iterator_40858c90,
        mid_lastIndexOf_290588f1,
        mid_listIterator_b5be4e14,
        mid_listIterator_4145ee6a,
        mid_remove_29be6a55,
        mid_set_211591b1,
        mid_subList_6bc635fe,
        mid_removeRange_d8d154a6,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit AbstractList(jobject obj) : ::java::util::AbstractCollection(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      AbstractList(const AbstractList& obj) : ::java::util::AbstractCollection(obj) {}

      jboolean add(const ::java::lang::Object &) const;
      void add(jint, const ::java::lang::Object &) const;
      jboolean addAll(jint, const ::java::util::Collection &) const;
      void clear() const;
      jboolean equals(const ::java::lang::Object &) const;
      ::java::lang::Object get(jint) const;
      jint hashCode() const;
      jint indexOf(const ::java::lang::Object &) const;
      ::java::util::Iterator iterator() const;
      jint lastIndexOf(const ::java::lang::Object &) const;
      ::java::util::ListIterator listIterator() const;
      ::java::util::ListIterator listIterator(jint) const;
      ::java::lang::Object remove(jint) const;
      ::java::lang::Object set(jint, const ::java::lang::Object &) const;
      ::java::util::List subList(jint, jint) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyTypeObject PY_TYPE(AbstractList);

    class t_AbstractList {
    public:
      PyObject_HEAD
      AbstractList object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_AbstractList *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const AbstractList&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const AbstractList&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
