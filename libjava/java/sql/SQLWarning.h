
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_sql_SQLWarning__
#define __java_sql_SQLWarning__

#pragma interface

#include <java/sql/SQLException.h>
extern "Java"
{
  namespace java
  {
    namespace sql
    {
        class SQLWarning;
    }
  }
}

class java::sql::SQLWarning : public ::java::sql::SQLException
{

public:
  SQLWarning(::java::lang::String *, ::java::lang::String *, jint);
  SQLWarning(::java::lang::String *, ::java::lang::String *);
  SQLWarning(::java::lang::String *);
  SQLWarning();
  virtual ::java::sql::SQLWarning * getNextWarning();
  virtual void setNextWarning(::java::sql::SQLWarning *);
public: // actually package-private
  static const jlong serialVersionUID = 3917336774604784856LL;
public:
  static ::java::lang::Class class$;
};

#endif // __java_sql_SQLWarning__
