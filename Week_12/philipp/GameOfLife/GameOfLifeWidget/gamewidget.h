#ifndef GAMEWIDGET_H
#define GAMEWIDGET_H

#include <QWidget>

class QTimer;

class GameOfLifeBase;

namespace Ui {
class GameWidget;
}

class GameWidget : public QWidget
{
    Q_OBJECT

public:
    explicit GameWidget(QWidget *parent = 0);
    ~GameWidget();

    void createNewGame(int height, int width, int gameType, bool fill);

private:
    void setCurrentEvolution(int evolution);
    void setImageData();

public slots:
    void on_nextEvolutionButton_clicked();
    void on_autoEvolveButton_clicked();
    void on_clearButton_clicked();
    void on_randomFillButton_clicked();
    void on_evolutionIntervalSpin_valueChanged(double d);
    void on_coordinateClicked(QPointF point);
    void onColorActionGroup_triggered(QAction* action);

private:
    Ui::GameWidget *ui;
    int mCurrentColorActionIndex;

    GameOfLifeBase *mGame;
    int mCurrentEvolution;
    QTimer *mAutoEvolutionTimer;
};

#endif // GAMEWIDGET_H
