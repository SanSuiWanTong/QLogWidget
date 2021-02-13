#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QLogWidget.h"

class QLogWidget : public QMainWindow
{
    Q_OBJECT

public:
    QLogWidget(QWidget *parent = Q_NULLPTR);

private:
    Ui::QLogWidgetClass ui;
};
