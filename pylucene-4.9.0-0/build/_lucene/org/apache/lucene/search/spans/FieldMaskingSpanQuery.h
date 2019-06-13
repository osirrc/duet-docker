#ifndef org_apache_lucene_search_spans_FieldMaskingSpanQuery_H
#define org_apache_lucene_search_spans_FieldMaskingSpanQuery_H

#include "org/apache/lucene/search/spans/SpanQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
      }
      namespace index {
        class AtomicReaderContext;
        class Term;
        class TermContext;
        class IndexReader;
      }
      namespace search {
        class IndexSearcher;
        class Query;
        namespace spans {
          class Spans;
        }
        class Weight;
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
    class Set;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spans {

          class FieldMaskingSpanQuery : public ::org::apache::lucene::search::spans::SpanQuery {
          public:
            enum {
              mid_init$_58455a11,
              mid_createWeight_367763cb,
              mid_equals_290588e2,
              mid_extractTerms_fb4f2b26,
              mid_getField_14c7b5c5,
              mid_getMaskedQuery_d3aa0332,
              mid_getSpans_f003cb44,
              mid_hashCode_54c6a179,
              mid_rewrite_7edcaa43,
              mid_toString_97a5258f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldMaskingSpanQuery(jobject obj) : ::org::apache::lucene::search::spans::SpanQuery(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            FieldMaskingSpanQuery(const FieldMaskingSpanQuery& obj) : ::org::apache::lucene::search::spans::SpanQuery(obj) {}

            FieldMaskingSpanQuery(const ::org::apache::lucene::search::spans::SpanQuery &, const ::java::lang::String &);

            ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &) const;
            jboolean equals(const ::java::lang::Object &) const;
            void extractTerms(const ::java::util::Set &) const;
            ::java::lang::String getField() const;
            ::org::apache::lucene::search::spans::SpanQuery getMaskedQuery() const;
            ::org::apache::lucene::search::spans::Spans getSpans(const ::org::apache::lucene::index::AtomicReaderContext &, const ::org::apache::lucene::util::Bits &, const ::java::util::Map &) const;
            jint hashCode() const;
            ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
            ::java::lang::String toString(const ::java::lang::String &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spans {
          extern PyTypeObject PY_TYPE(FieldMaskingSpanQuery);

          class t_FieldMaskingSpanQuery {
          public:
            PyObject_HEAD
            FieldMaskingSpanQuery object;
            static PyObject *wrap_Object(const FieldMaskingSpanQuery&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
