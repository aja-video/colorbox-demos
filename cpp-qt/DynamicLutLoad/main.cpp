/*
 * SPDX-License-Identifier: MIT
 * Copyright (C) 2021 - 2022 AJA Video Systems, Inc.
 */
#include "dialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    qputenv("QT_AUTO_SCREEN_SCALE_FACTOR", QByteArray("1"));

    QApplication a(argc, argv);
    Dialog w;
    w.show();
    return a.exec();
}


