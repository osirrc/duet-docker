#ifndef org_apache_lucene_store_FilterDirectory_H
#define org_apache_lucene_store_FilterDirectory_H

#include "org/apache/lucene/store/Directory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexOutput;
        class Lock;
        class IndexInput;
        class IOContext;
        class LockFactory;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Collection;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class FilterDirectory : public ::org::apache::lucene::store::Directory {
        public:
          enum {
            mid_clearLock_5fdc3f48,
            mid_close_54c6a166,
            mid_createOutput_5ad5358d,
            mid_deleteFile_5fdc3f48,
            mid_fileExists_5fdc3f44,
            mid_fileLength_5fdc3f54,
            mid_getDelegate_1f3934bb,
            mid_getLockFactory_e4e9c36d,
            mid_getLockID_14c7b5c5,
            mid_listAll_2e6d5245,
            mid_makeLock_f26bb9a8,
            mid_openInput_3e1b5375,
            mid_setLockFactory_9892eb8c,
            mid_sync_9bfb370d,
            mid_toString_14c7b5c5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterDirectory(jobject obj) : ::org::apache::lucene::store::Directory(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FilterDirectory(const FilterDirectory& obj) : ::org::apache::lucene::store::Directory(obj) {}

          void clearLock(const ::java::lang::String &) const;
          void close() const;
          ::org::apache::lucene::store::IndexOutput createOutput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void deleteFile(const ::java::lang::String &) const;
          jboolean fileExists(const ::java::lang::String &) const;
          jlong fileLength(const ::java::lang::String &) const;
          ::org::apache::lucene::store::Directory getDelegate() const;
          ::org::apache::lucene::store::LockFactory getLockFactory() const;
          ::java::lang::String getLockID() const;
          JArray< ::java::lang::String > listAll() const;
          ::org::apache::lucene::store::Lock makeLock(const ::java::lang::String &) const;
          ::org::apache::lucene::store::IndexInput openInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void setLockFactory(const ::org::apache::lucene::store::LockFactory &) const;
          void sync(const ::java::util::Collection &) const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        extern PyTypeObject PY_TYPE(FilterDirectory);

        class t_FilterDirectory {
        public:
          PyObject_HEAD
          FilterDirectory object;
          static PyObject *wrap_Object(const FilterDirectory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
