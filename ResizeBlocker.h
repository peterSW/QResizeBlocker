#ifndef RESIZEBLOCKER_H
#define RESIZEBLOCKER_H
#include <QWidget>

class ResizeBlocker
{
public:
    ResizeBlocker(QWidget *widget)
        : m_widget(widget)
    {
        m_widget->setFixedSize(m_widget->size());
    }
    ~ResizeBlocker()
    {
        m_widget->setFixedSize(QSize(QWIDGETSIZE_MAX, QWIDGETSIZE_MAX));
    }
private:
    QWidget *m_widget;
};

#endif // RESIZEBLOCKER_H
