#ifndef VERIFICA_TIPOS_H
#define VERIFICA_TIPOS_H
#include<QString>
class verifica_tipos
{
public:
    verifica_tipos();
    QString verifica_tipo(QString valor, QString valor2);
    QString asigna_tipo(QString valor, QString valor2);
    QString check_doble(QString v);
    QString check_bool(QString v);
    QString check_char(QString v);
    QString check_entero(QString v);
    QString suma_bool(QString v1,QString v2);
    QString resta_bool(QString v1,QString v2);
    QString mul_bool(QString v1,QString v2);
    QString divi_bool(QString v1,QString v2);
    QString obtener_valor_booleano(QString v1);
};

#endif // VERIFICA_TIPOS_H
