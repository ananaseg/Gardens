#ifndef QMAINGLWIDGET_H
#define QMAINGLWIDGET_H

#include <QGLWidget>
#include "qtlogo.h"
#include "../Utils/glutils.h"

class QMainGLWidget : public QGLWidget
{
    Q_OBJECT
public:
    explicit QMainGLWidget(QWidget *parent = 0);
    ~QMainGLWidget();
protected:
    void initializeGL();
    void paintGL();
    void resizeGL(int width, int height);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);

private:
     QtLogo *logo;
     int xRot;
     int yRot;
     int zRot;
     QPoint lastPos;
     QColor qtGreen;
     QColor qtPurple;
    
public slots:
     void setXRotation(int angle);
     void setYRotation(int angle);
     void setZRotation(int angle);

 signals:
     void xRotationChanged(int angle);
     void yRotationChanged(int angle);
     void zRotationChanged(int angle);
};

#endif // QMAINGLWIDGET_H
