#ifndef java_lang_Byte_H
#define java_lang_Byte_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class NumberFormatException;
    class Comparable;
    class Object;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Byte : public ::java::lang::Number {
    public:
      enum {
        mid_init$_b2271687,
        mid_init$_5fdc3f48,
        mid_byteValue_54c6a172,
        mid_compare_1648a7cb,
        mid_compareTo_c2b89a9a,
        mid_decode_4a53f64a,
        mid_doubleValue_54c6a174,
        mid_equals_290588e2,
        mid_floatValue_54c6a176,
        mid_hashCode_54c6a179,
        mid_hashCode_b2271698,
        mid_intValue_54c6a179,
        mid_longValue_54c6a17a,
        mid_parseByte_5fdc3f5c,
        mid_parseByte_6e53ccd2,
        mid_shortValue_54c6a163,
        mid_toString_14c7b5c5,
        mid_toString_fce80606,
        mid_toUnsignedInt_b2271698,
        mid_toUnsignedLong_b227169b,
        mid_valueOf_f1e1a5a7,
        mid_valueOf_4a53f64a,
        mid_valueOf_83e30bb0,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Byte(jobject obj) : ::java::lang::Number(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      Byte(const Byte& obj) : ::java::lang::Number(obj) {}

      static jint BYTES;
      static jbyte MAX_VALUE;
      static jbyte MIN_VALUE;
      static jint SIZE;
      static ::java::lang::Class *TYPE;

      Byte(jbyte);
      Byte(const ::java::lang::String &);

      jbyte byteValue() const;
      static jint compare(jbyte, jbyte);
      jint compareTo(const Byte &) const;
      static Byte decode(const ::java::lang::String &);
      jdouble doubleValue() const;
      jboolean equals(const ::java::lang::Object &) const;
      jfloat floatValue() const;
      jint hashCode() const;
      static jint hashCode(jbyte);
      jint intValue() const;
      jlong longValue() const;
      static jbyte parseByte(const ::java::lang::String &);
      static jbyte parseByte(const ::java::lang::String &, jint);
      jshort shortValue() const;
      ::java::lang::String toString() const;
      static ::java::lang::String toString(jbyte);
      static jint toUnsignedInt(jbyte);
      static jlong toUnsignedLong(jbyte);
      static Byte valueOf(jbyte);
      static Byte valueOf(const ::java::lang::String &);
      static Byte valueOf(const ::java::lang::String &, jint);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyTypeObject PY_TYPE(Byte);

    class t_Byte {
    public:
      PyObject_HEAD
      Byte object;
      static PyObject *wrap_Object(const Byte&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
