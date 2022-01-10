
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_util_regex_RETokenChar__
#define __gnu_java_util_regex_RETokenChar__

#pragma interface

#include <gnu/java/util/regex/REToken.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace lang
      {
          class CPStringBuilder;
      }
      namespace util
      {
        namespace regex
        {
            class CharIndexed;
            class REMatch;
            class REToken;
            class RETokenChar;
        }
      }
    }
  }
}

class gnu::java::util::regex::RETokenChar : public ::gnu::java::util::regex::REToken
{

public: // actually package-private
  RETokenChar(jint, jchar, jboolean);
  jint getMinimumLength();
  jint getMaximumLength();
  ::gnu::java::util::regex::REMatch * matchThis(::gnu::java::util::regex::CharIndexed *, ::gnu::java::util::regex::REMatch *);
private:
  jboolean matchOneString(::gnu::java::util::regex::CharIndexed *, jint);
  jboolean charEquals(jchar, jchar);
public: // actually package-private
  jboolean returnsFixedLengthMatches();
  jint findFixedLengthMatches(::gnu::java::util::regex::CharIndexed *, ::gnu::java::util::regex::REMatch *, jint);
  jboolean chain(::gnu::java::util::regex::REToken *);
  void dump(::gnu::java::lang::CPStringBuilder *);
private:
  JArray< jchar > * __attribute__((aligned(__alignof__( ::gnu::java::util::regex::REToken)))) ch;
  jboolean insens;
  jint matchedLength;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_util_regex_RETokenChar__
