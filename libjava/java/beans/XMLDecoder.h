
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_beans_XMLDecoder__
#define __java_beans_XMLDecoder__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace beans
    {
        class ExceptionListener;
        class XMLDecoder;
    }
  }
}

class java::beans::XMLDecoder : public ::java::lang::Object
{

public:
  XMLDecoder(::java::io::InputStream *);
  XMLDecoder(::java::io::InputStream *, ::java::lang::Object *);
  XMLDecoder(::java::io::InputStream *, ::java::lang::Object *, ::java::beans::ExceptionListener *);
  XMLDecoder(::java::io::InputStream *, ::java::lang::Object *, ::java::beans::ExceptionListener *, ::java::lang::ClassLoader *);
  virtual void close();
  virtual ::java::beans::ExceptionListener * getExceptionListener();
  virtual ::java::lang::Object * getOwner();
  virtual ::java::lang::Object * readObject();
  virtual void setExceptionListener(::java::beans::ExceptionListener *);
  virtual void setOwner(::java::lang::Object *);
private:
  ::java::lang::Object * __attribute__((aligned(__alignof__( ::java::lang::Object)))) owner;
  ::java::beans::ExceptionListener * exceptionListener;
  ::java::io::InputStream * inputStream;
  jboolean isStreamClosed;
  ::java::lang::ClassLoader * classLoader;
  ::java::util::Iterator * iterator;
public:
  static ::java::lang::Class class$;
};

#endif // __java_beans_XMLDecoder__