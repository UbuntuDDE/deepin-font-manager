/**
 * Copyright (C) 2017 Deepin Technology Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 **/
#include "dde-file-manager/dfmfilepreviewplugin.h"

#include "fontpreview.h"

DFM_BEGIN_NAMESPACE

class TextPreviewPlugin : public DFMFilePreviewPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID DFMFilePreviewFactoryInterface_iid FILE "deepin-font-preview-plugin.json")

public:
    DFMFilePreview *create(const QString &key) Q_DECL_OVERRIDE {
        Q_UNUSED(key)

        return new FontPreview();
    }
};



DFM_END_NAMESPACE

#include "main.moc"
