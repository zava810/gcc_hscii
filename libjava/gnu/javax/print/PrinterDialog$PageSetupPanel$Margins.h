
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_print_PrinterDialog$PageSetupPanel$Margins__
#define __gnu_javax_print_PrinterDialog$PageSetupPanel$Margins__

#pragma interface

#include <javax/swing/JPanel.h>
extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace print
      {
          class PrinterDialog$PageSetupPanel;
          class PrinterDialog$PageSetupPanel$Margins;
      }
    }
  }
  namespace java
  {
    namespace awt
    {
      namespace event
      {
          class FocusEvent;
      }
    }
  }
  namespace javax
  {
    namespace swing
    {
        class JLabel;
        class JTextField;
    }
  }
}

class gnu::javax::print::PrinterDialog$PageSetupPanel$Margins : public ::javax::swing::JPanel
{

public: // actually package-private
  PrinterDialog$PageSetupPanel$Margins(::gnu::javax::print::PrinterDialog$PageSetupPanel *);
public:
  void focusGained(::java::awt::event::FocusEvent *);
  void focusLost(::java::awt::event::FocusEvent *);
private:
  void updateMargins();
public: // actually package-private
  void updateForSelectedService();
private:
  ::javax::swing::JLabel * __attribute__((aligned(__alignof__( ::javax::swing::JPanel)))) left;
  ::javax::swing::JLabel * right;
  ::javax::swing::JLabel * top;
  ::javax::swing::JLabel * bottom;
  ::javax::swing::JTextField * left_tf;
  ::javax::swing::JTextField * right_tf;
  ::javax::swing::JTextField * top_tf;
  ::javax::swing::JTextField * bottom_tf;
public: // actually package-private
  ::gnu::javax::print::PrinterDialog$PageSetupPanel * this$1;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_print_PrinterDialog$PageSetupPanel$Margins__
