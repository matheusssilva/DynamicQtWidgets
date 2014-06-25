#include "dynamicqtwidgetstest.hpp"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);

  DynamicQtWidgetsTest tests;
  QTest::qExec(&tests, argc, argv);

  return app.exec();
}
