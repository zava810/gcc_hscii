
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_classpath_jdwp_transport_JdwpCommandPacket__
#define __gnu_classpath_jdwp_transport_JdwpCommandPacket__

#pragma interface

#include <gnu/classpath/jdwp/transport/JdwpPacket.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace classpath
    {
      namespace jdwp
      {
        namespace transport
        {
            class JdwpCommandPacket;
        }
      }
    }
  }
}

class gnu::classpath::jdwp::transport::JdwpCommandPacket : public ::gnu::classpath::jdwp::transport::JdwpPacket
{

public:
  JdwpCommandPacket();
  JdwpCommandPacket(jbyte, jbyte);
  virtual jint getLength();
  virtual jbyte getCommandSet();
  virtual void setCommandSet(jbyte);
  virtual jbyte getCommand();
  virtual void setCommand(jbyte);
public: // actually protected
  virtual jint myFromBytes(JArray< jbyte > *, jint);
  virtual void myWrite(::java::io::DataOutputStream *);
  jbyte __attribute__((aligned(__alignof__( ::gnu::classpath::jdwp::transport::JdwpPacket)))) _commandSet;
  jbyte _command;
private:
  static const jint MINIMUM_LENGTH = 2;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_classpath_jdwp_transport_JdwpCommandPacket__
