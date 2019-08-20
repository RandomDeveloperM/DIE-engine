// Copyright (c) 2012-2019 hors<horsicq@gmail.com>
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:

// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
#ifndef DIALOGMACHLC_H
#define DIALOGMACHLC_H

#include "dialogmachgeneric.h"
#include "dialoghde.h"
#include "dialogentropy.h"

namespace Ui
{
class DialogMACHLC;
}

class DialogMACHLC : public DialogMACHGeneric
{
    Q_OBJECT

public:
    explicit DialogMACHLC(QWidget *parent=nullptr);
    ~DialogMACHLC();

private slots:
    bool reload();

    void on_pushButtonOK_clicked();
    void on_tableWidgetSections_customContextMenuRequested(const QPoint &pos);

    void editHeader();
    void hex();

private:
    Ui::DialogMACHLC *ui;
    QAction *actEditHeader;
    QAction *actHex;
};

#endif // DIALOGMACHLC_H
