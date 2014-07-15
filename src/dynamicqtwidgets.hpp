/*
 * dynamicwidgets.hpp
 * This file is part of libdynamicqtwidgets.so
 *
 * Copyright (C) 2014 - Matheus Saraiva
 *
 * libdynamicqtwidgets.so is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * libdynamicqtwidgets.so is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with libdynamicqtwidgets.so. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef DYNAMICQTWIDGETS_HPP
#define DYNAMICQTWIDGETS_HPP

#include "dynamicqtwidgets_global.hpp"
#include <QtWidgets/QWidget>
#include <QtWidgets/QMessageBox>
#include <QtUiTools/QUiLoader>
#include <QtCore/QString>
#include <QtCore/QFile>

class DYNAMICQTWIDGETSSHARED_EXPORT DynamicQtWidgets
{
public:
  DynamicQtWidgets(QString, QWidget* = 0);
  QWidget* createWidget();

private:
  QWidget *parent;      	// Parente for new widget
  QString uifile;           // Ui File
};

#endif // DYNAMICQTWIDGETS_HPP
