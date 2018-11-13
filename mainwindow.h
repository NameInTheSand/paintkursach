#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}
class QPainter;
class Qimage;
class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    Ui::MainWindow *ui;
    QPainter  *mPainter;//рисование
    QImage * mImage;//изображение
    QPoint mBegin;//инициализация
    QPoint mEnd;//завершение
    QColor mColor;//цвет
    bool mEnabled;// проверка на активацию
    int mSize;//размер
protected:
    void paintEvent(QPaintEvent *e) override;
    void mousePressEvent(QMouseEvent *e) override;
    void mouseMoveEvent(QMouseEvent *e) override;
    void mouseReleaseEvent (QMouseEvent *e) override;
private slots:
    void on_actionColor_triggered();
    void on_actionSize_triggered();
    void on_actionExit_triggered();
};

#endif // MAINWINDOW_H
