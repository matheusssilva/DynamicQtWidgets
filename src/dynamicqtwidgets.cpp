/*
 * dynamicqtwidgets.cpp
 * This file is part of libdynamicqtwidgets.so
 *
 * Copyright (C) 2014 - Matheus Saraiva
 *
 * libdynamicwidgets.so is free software; you can redistribute it and/or modify
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

#include "dynamicqtwidgets.hpp"

DynamicQtWidgets::DynamicQtWidgets(QString uifile, QWidget *parent) // Constructor
{
  this->parent = parent;
  this->uifile = uifile;
}

QWidget* DynamicQtWidgets::createWidget()
{
  QUiLoader loader;
  QFile ui_file(uifile);

  if (!ui_file.exists())      // If file not found
  {
      QMessageBox *message = new QMessageBox(parent);
      message->setText("Ui file not found");
      return message;
  }
  else if (!ui_file.open(QFile::ReadOnly)) // If open file fail
  {
    QMessageBox *message = new QMessageBox(parent);
    message->setText("Error trying to open the file");
    return message;
  }

  QWidget* widget = loader.load(&ui_file, parent);  // Load .ui file and return pointer for object created
  ui_file.close();

  if (!widget)      // If widget pointer is null
  {
      QMessageBox *message = new QMessageBox(parent);
      message->setText("Could not read the file, check your ui file.");
      return message;
  }

  return widget;
}
