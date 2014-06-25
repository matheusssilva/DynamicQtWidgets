/*
 * dynamicqtwidgetstest.cpp
 * This file is part of dynamicqtwidgets.so
 *
 * Copyright (C) 2014 - Matheus Saraiva
 *
 * dynamicqtwidgets.so is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * dynamicqtwidgets.so is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with dynamicqtwidgets.so. If not, see <http://www.gnu.org/licenses/>.
 */

#include "dynamicqtwidgetstest.hpp"

DynamicQtWidgetsTest::DynamicQtWidgetsTest()
{
}

DynamicQtWidgetsTest::~DynamicQtWidgetsTest()
{
}

void DynamicQtWidgetsTest::testCreateWidget()
{
  QFETCH(QString, file_ui);
  QFETCH(bool, widget);

  DynamicQtWidgets dynawidg(file_ui);              // DynamicQtWidgets object
  QWidget *widtest = dynawidg.createWidget();
  QCOMPARE(widtest->isWidgetType(), widget);              // Compare DynamicQtWidgets::createWidget() return with QWidget type
  delete widtest;
}

void DynamicQtWidgetsTest::testCreateWidget_data()
{
  QTest::addColumn<QString>("file_ui");
  QTest::addColumn<bool>("widget");

  QTest::newRow("Valid File") << "test.ui" << true;                             // Valid File
  QTest::newRow("Inexistent File") << "inexistent.ui" << true;         // Inexistent File
  QTest::newRow("Invalid File") << "test_text.ui" << true;                // Invalid File
  QTest::newRow("Empty Ui File") << "testempty.ui" << true;          // Empty File
}
