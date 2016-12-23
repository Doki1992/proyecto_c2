#ifndef TOKEN_ERROR_H
#define TOKEN_ERROR_H
#include<QString>
class token_error
{
public:
    QString descripcion;
    QString tipo;
    QString fila;
    QString col;
    QString valor;
    token_error(QString valor, QString fila, QString columna, QString tipo, QString descripcion);
};

#endif // TOKEN_ERROR_H
