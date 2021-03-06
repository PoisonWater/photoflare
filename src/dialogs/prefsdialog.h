#ifndef PREFSDIALOG_H
#define PREFSDIALOG_H

/*

  Preferences dialog class.

*/

#include <QDialog>

namespace Ui {
class prefsDialog;
}

class prefsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit prefsDialog(QWidget *parent = 0);
    ~prefsDialog();

private slots:
    void on_buttonBox_accepted();

    void on_openFolderButton_clicked();

    void on_saveFolderButton_clicked();

    void on_compressionSlider_sliderMoved(int position);

    void on_historySlider_sliderMoved(int position);

    void on_restartButton_clicked();

    void set_user_language();

    void on_comboBoxLanguage_currentIndexChanged();

    void on_buttonBox_rejected();

    void on_compressionSlider_valueChanged(int value);

    void on_historySlider_valueChanged(int value);

private:
    Ui::prefsDialog *ui;
    QString flagPath;
};

#endif // PREFSDIALOG_H
