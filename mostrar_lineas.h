#ifndef CODEEDITOR_H
#define CODEEDITOR_H
#include <QPlainTextEdit>
#include <QObject>

class QPaintEvent;
class QResizeEvent;
class QSize;
class QWidget;

class LineNumberArea;


class Mostrar_lineas : public QPlainTextEdit
{
    Q_OBJECT

public:
    Mostrar_lineas(QWidget *parent = 0);

    void lineNumberAreaPaintEvent(QPaintEvent *event);
    int lineNumberAreaWidth();

protected:
    void resizeEvent(QResizeEvent *event);

private slots:
    void updateLineNumberAreaWidth(int newBlockCount);
    void highlightCurrentLine();
    void updateLineNumberArea(const QRect &, int);

private:
    QWidget *lineNumberArea;
};


class LineNumberArea : public QWidget
{
public:
    LineNumberArea(Mostrar_lineas *editor) : QWidget(editor) {
        mostrar_lineas = editor;
    }

    QSize sizeHint() const {
        return QSize(mostrar_lineas->lineNumberAreaWidth(), 0);
    }

protected:
    void paintEvent(QPaintEvent *event) {
        mostrar_lineas->lineNumberAreaPaintEvent(event);
    }

private:
    Mostrar_lineas *mostrar_lineas;
};

#endif // CODEEDITOR_H

