/*
 *  Copyright (c) 2017 Eugene Ingerman
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef __TOOL_REFERENCE_IMAGES_WIDGET_H
#define __TOOL_REFERENCE_IMAGES_WIDGET_H

#include <QScopedPointer>
#include <QWidget>
#include <QModelIndex>

#include "kis_types.h"

class KisCanvasResourceProvider;
class KoColor;


class ToolReferenceImagesWidget : public QWidget
{
    Q_OBJECT
public:
    ToolReferenceImagesWidget(KisCanvasResourceProvider *provider = 0, QWidget *parent = 0);
    ~ToolReferenceImagesWidget() override;

private:
    struct Private;
    const QScopedPointer<Private> d;
};

#endif