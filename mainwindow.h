#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_rd_td_clicked();
    void on_rd_tc_clicked();
    void reset();
    bool IsNumber(QString Text_x);
    void on_bt_taoKhoa_clicked();
    void on_btMaHoa_clicked();
    void on_btGiaiMa_clicked();
    void on_btTaoBanRoMoi_clicked();
    void on_btThoat_clicked();
    void on_btn_ChonFile_clicked();
    void on_btn_ChonFile_2_clicked();

    void on_btn_LuuFile_clicked();
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
