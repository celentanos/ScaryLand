#ifndef TARGET_H
#define TARGET_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>

class Target : public QGraphicsObject
{
    Q_OBJECT
public:
    explicit Target();
    ~Target();
    /* Функция по нанесению урона,
     * величина урона передаётся в качестве аргумента функции
     * */
    void hit(int damage);

signals:

public slots:

protected:
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

private:
    int health;         // Текущий запас здоровья мишени
    int maxHealth;      // Максимальный запас здоровья мишени
};

#endif // TARGET_H
