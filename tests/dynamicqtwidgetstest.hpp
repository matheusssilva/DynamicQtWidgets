/*
 * dynamicqtwidgetstest.hpp
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

#ifndef DYNAMICQTWIDGETSTEST_H
# define DYNAMICQTWIDGETSTEST_H

#include <QString>
#include <QtTest>
#include "dynamicqtwidgets.hpp"

class DynamicQtWidgetsTest : public QObject
{
  Q_OBJECT

public:
  explicit DynamicQtWidgetsTest();
  ~DynamicQtWidgetsTest();

private Q_SLOTS:
  void testCreateWidget();
  void testCreateWidget_data();
};
#endif
