#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <codecvt>
#include <qmath.h>
#include <QMessageBox>
#include <locale>
#include <iostream>
#include <string>
#include "base64.h"
#include <Windows.h>
#include <Commdlg.h>
#include <fstream>
#include <QFile>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
int EsoP, EsoQ, E_So_G_A, EsoA, EsoX, EsoD, EsoK, EsoY;
int danhDau = 0;
void MainWindow::reset()
{
    ui->So_A->setText(""); ui->So_D->setText(""); ui->So_K->setText("");
    ui->So_P->setText(""); ui->So_X->setText(""); ui->So_Y->setText("");
    ui->txtBanRo->setText("");
    ui->txt_maHoaBanRo->setText("");
    ui->txt_banMaHoaNhanDuoc->setText("");
    ui->txt_banGiaima->setText("");

}
void MainWindow::on_rd_td_clicked()
{
    //ui->rd_td->setChecked(true);
    ui->So_A->setEnabled(false);
    ui->So_D->setEnabled(false);
    ui->So_K->setEnabled(false);
    ui->So_P->setEnabled(false);
    ui->So_X->setEnabled(false);
    ui->So_Y->setEnabled(false);
    reset();

}

void MainWindow::on_rd_tc_clicked()
{
    ui->So_A->setEnabled(true);
    ui->So_D->setEnabled(false);
    ui->So_K->setEnabled(true);
    ui->So_P->setEnabled(true);
    ui->So_X->setEnabled(true);
    ui->So_Y->setEnabled(false);
    reset();
}
bool MainWindow::IsNumber(QString Text_x)
{

    return Text_x.toInt();
}
int E_ChonSoNgauNhien()
{
    int random_number = rand() % (3000 - 1000 + 1) + 1000;
    return random_number;
}
bool E_kiemTraNguyenTo(int so_kt)
{
    bool kiemtra = true;
    if (so_kt == 2 || so_kt == 3)
    {
        // kiemtra = true;
        return kiemtra;
    }
    else
    {
        if (so_kt == 1 || so_kt % 2 == 0 || so_kt % 3 == 0)
        {
            kiemtra = false;
        }
        else
        {
            for (int i = 5; i <= qSqrt(so_kt); i = i + 6)
                if (so_kt % i == 0 || so_kt % (i + 2) == 0)
                {
                    kiemtra = false;
                    break;
                }
        }
    }
    return kiemtra;
}
bool E_kiemTraUocCuaSoP(int so_P, int so_Q)
{
    bool kt_Okie = true;
    if ((so_P - 1) % so_Q == 0)
    {
        kt_Okie = true;
    }
    else
        kt_Okie = false;
    return kt_Okie;
}
int E_LuyThuaModulo_(int CoSo_, int SoMu_, int soModulo_)
{


    //int a[100] ={100};
    int a[100];
    int k = 0;
    do
    {
        a[k] = SoMu_ % 2;
        k++;
        SoMu_ = SoMu_ / 2;
    }
    while (SoMu_ != 0);
    //Quá trình lấy dư
    int kq = 1;

    for (int i = k - 1; i >= 0; i--)
    {
        kq = (kq * kq) % soModulo_;
        if (a[i] == 1)
            kq = (kq * CoSo_) % soModulo_;
    }
    return kq;
}
bool E_kiemTraPTSinh(int so_kt, int E_SoP_, int E_soQ_)// kiem tra phan tu sinh
{
    bool ktOkie = true;
    int soMu = E_SoP_ - 1 / E_soQ_;
    int ketQuaKT = E_LuyThuaModulo_(so_kt, soMu, E_SoP_);

    if (ketQuaKT != 1)
    {
        ktOkie = true;
    }
    else
    {
        if (ketQuaKT == 1) ktOkie = false;
    }
    return ktOkie;
}
bool nguyenToCungNhau(int ai, int bi)// "Hàm kiểm tra hai số nguyên tố cùng nhau"
{
    bool ktx_;
    // giải thuật Euclid;
    int temp;
    while (bi != 0)
    {
        temp = ai % bi;
        ai = bi;
        bi = temp;
    }
    if (ai == 1) { ktx_ = true; }
    else ktx_ = false;
    return ktx_;
}

int E_tinhModulo_nghichdao(int SoNCNDn, int SoMdlm)
{
    int kd = SoMdlm;
    int r = 1, q, y0 = 0, y1 = 1, y = 0;
    while (SoNCNDn != 0)
    {
        r = SoMdlm % SoNCNDn;
        if (r == 0)
            break;
        else
        {
            q = SoMdlm / SoNCNDn;
            y = y0 - y1 * q;
            SoMdlm = SoNCNDn;
            SoNCNDn = r;
            y0 = y1;
            y1 = y;
        }
    }
    if (y >= 0)
        return y;
    else
    {
        y = kd + y;
        return y;
    }
}
int E_TinhC1muxModP(int SoC1, int SomuX, int somDLP)
{
    int kq_E_TinhC1muxModP = 1;
    for (int i = 0; i <= SomuX; i++)
    {
        kq_E_TinhC1muxModP = kq_E_TinhC1muxModP * E_tinhModulo_nghichdao(SoC1, somDLP);
    }
    return kq_E_TinhC1muxModP;
}
void TaoKhoa_click()
{
    EsoQ = E_So_G_A = EsoA = EsoX = EsoD = EsoK = 0;

    // chọn số nguyên tố ngẫu nhiên Q thỏa mãn Q là ước của P - 1;
    do
    {
        int rdQ = rand() % (EsoP -1 - 2 + 1) + 2;
        EsoQ= rdQ;
    }
    while (!E_kiemTraNguyenTo(EsoP) || !E_kiemTraUocCuaSoP(EsoP, EsoQ));
    // tìm số G để tìm số A (A là phần tử sinh):
    do
    {
        int rdE_So_G_A = rand() % (EsoP -1 - 2 + 1) + 2;
        E_So_G_A= rdE_So_G_A;
    }
    while (!E_kiemTraPTSinh(E_So_G_A, EsoP, EsoQ));

    EsoA = E_LuyThuaModulo_(E_So_G_A, EsoP - 1 / EsoQ, EsoP); // phần tử sinh

    do
    {
        int rdEsoX = rand() % (EsoP -2 - 2 + 1) + 2;
        EsoX= rdEsoX;
    }
    while (EsoX == EsoQ || EsoX == E_So_G_A);
    // d= a^x mod P
    EsoD = E_LuyThuaModulo_(EsoA, EsoX, EsoP);// beta; d
    do
    {
        int rdEsoK = rand() % (EsoP -2 - 2 + 1) + 2;
        EsoK= rdEsoK;
    }
    while (EsoK == EsoX || EsoK == EsoA || EsoK == EsoQ || EsoK == E_So_G_A || !nguyenToCungNhau(EsoK, EsoP - 1));
    // Tính Y = A^k mod p - Khóa công khai
    EsoY = E_LuyThuaModulo_(EsoA, EsoK, EsoP);

}
void MainWindow::on_bt_taoKhoa_clicked()
{
    if (ui->rd_td->isChecked() == true && ui->rd_tc->isChecked() == false)
    {
        reset();
        // chọn số nguyên tố ngẫu nhiên P
        EsoP = 0;
        do
        {
            EsoP = E_ChonSoNgauNhien();
        }
        while (E_kiemTraNguyenTo(EsoP) == false);
        TaoKhoa_click();
        std::string so_P_text = std::to_string(EsoP);
        ui->So_P->setText(QString::fromStdString(so_P_text));
        std::string so_A_text = std::to_string(EsoA);
        ui->So_A->setText(QString::fromStdString(so_A_text));
        std::string so_X_text = std::to_string(EsoX);
        ui->So_X->setText(QString::fromStdString(so_X_text));
        std::string so_D_text = std::to_string(EsoD);
        ui->So_D->setText(QString::fromStdString(so_D_text));
        std::string so_K_text = std::to_string(EsoK);
        ui->So_K->setText(QString::fromStdString(so_K_text));
        std::string so_Y_text = std::to_string(EsoY);
        ui->So_Y->setText(QString::fromStdString(so_Y_text));
    }
    else if (ui->rd_td->isChecked() == false && ui->rd_tc->isChecked() == true)
    {
        // thực hiện thao tác tạo khóa tùy chọn
        if (ui->So_P->text() == "")
        {
            QMessageBox::warning(this, "Thông Báo ","Phải nhập số P ");
        }else
            if (ui->So_X->text() == "")
            {
                QMessageBox::warning(this, "Thông Báo ","Phải nhập số x ");
            }else
                if (ui->So_A->text() == "")
                {
                    QMessageBox::warning(this, "Thông Báo ","Phải nhập số alpha ");
                }else
                    if (ui->So_K->text() == "")
                    {
                        QMessageBox::warning(this, "Thông Báo ","Phải nhập số K ");
                    }else
                        if (ui->So_P->text().toInt() == false || ui->So_X->text().toInt() == false ||ui->So_A->text().toInt() == false ||ui->So_K->text().toInt() == false )
                        {
                            QMessageBox::warning(this, "Thông Báo ","Bạn phải nhập đúng định dạng số ");
                        }else
                            if (ui->So_P->text().toInt()<=0 || ui->So_X->text().toInt() <=0 ||ui->So_A->text().toInt() <=0 ||ui->So_K->text().toInt()<=0 )
                            {
                                QMessageBox::warning(this, "Thông Báo ","Bạn phải nhập số > 0 ");
                            }else
                            {
                                int EsoP =ui->So_P->text().toInt();
                                int EsoX =ui->So_X->text().toInt();
                                int EsoA =ui->So_A->text().toInt();
                                int EsoD = E_LuyThuaModulo_(EsoA, EsoX, EsoP);
                                int EsoK =ui->So_K->text().toInt();
                                int EsoY = E_LuyThuaModulo_(EsoA, EsoK, EsoP);
                                if (E_kiemTraNguyenTo(EsoP) == false)
                                {
                                    QMessageBox::warning(this, "Thông Báo ","Phải chọn P là số nguyên tố ");
                                }
                                else
                                    if (EsoP < 1000)
                                    {
                                        QMessageBox::warning(this, "Thông Báo ","Số P quá nhỏ , Nhập số khác  ");
                                    }
                                    else
                                    {
                                        // TaoKhoa_click();
                                        std::string so_P_text = std::to_string(EsoP);
                                        ui->So_P->setText(QString::fromStdString(so_P_text));
                                        std::string so_A_text = std::to_string(EsoA);
                                        ui->So_A->setText(QString::fromStdString(so_A_text));
                                        std::string so_X_text = std::to_string(EsoX);
                                        ui->So_X->setText(QString::fromStdString(so_X_text));
                                        std::string so_D_text = std::to_string(EsoD);
                                        ui->So_D->setText(QString::fromStdString(so_D_text));
                                        std::string so_K_text = std::to_string(EsoK);
                                        ui->So_K->setText(QString::fromStdString(so_K_text));
                                        std::string so_Y_text = std::to_string(EsoY);
                                        ui->So_Y->setText(QString::fromStdString(so_Y_text));
                                    }
                            }
    }
    danhDau = 1;
    ui->btMaHoa->setEnabled(true);

}

std::string E_MaHoa( std::string ChuoiVao)
{
    // Chuyen xau thanh ma Unicode
    std::wstring_convert<std::codecvt_utf8<wchar_t>> convert;
    std::wstring wstr = convert.from_bytes(ChuoiVao);
    // Chuyển chuỗi Unicode thành mã Unicode dạng số
    std::vector<int> mh_temp2;
    for (int i = 0; i < wstr.length(); i++)
    {
        mh_temp2.push_back(static_cast<int>(wstr[i]));
    }
    // Mảng a chứa các kí tự sẽ mã hóa
    std::vector<int> mh_temp3;
    for (int i = 0; i < mh_temp2.size(); i++)
    {
        int encrypted_unicode = ((mh_temp2[i] % EsoP) * E_LuyThuaModulo_(EsoD, EsoK, EsoP)) % EsoP;
        mh_temp3.push_back(encrypted_unicode);
    }
    // Chuyển sang kiểu kí tự trong bảng mã Unicode
    std::wstring wstr_encrypted;
    for (int i = 0; i < mh_temp3.size(); i++)
    {
        wstr_encrypted += static_cast<wchar_t>(mh_temp3[i]);
    }
    // Chuyển chuỗi Unicode thành chuỗi UTF-8
    std::string utf8_encrypted = convert.to_bytes(wstr_encrypted);
    // Mã hóa chuỗi UTF-8 thành chuỗi base64
    std::string base64_encrypted = base64_encode(utf8_encrypted);
    // Trả về chuỗi đã mã hóa
    return base64_encrypted;
}
std::string E_GiaMa( std::string ChuoiVao){
    std::string BanGiaiMa = "";
    //Mã hóa chuỗi base64 thành chuỗi UTF-8
    std::string utf8_input = base64_decode(ChuoiVao);
    //Chuyển chuỗi UTF-8 thành chuỗi Unicode
    std::wstring_convert<std::codecvt_utf8<wchar_t>> convert;
    std::wstring wstr = convert.from_bytes(utf8_input);
    //Chuyển chuỗi Unicode thành mảng số
    std::vector<int> Eb;
    for (int i = 0; i < wstr.length(); i++)
    {
        Eb.push_back(static_cast<int>(wstr[i]));
    }
    //Giải mã
    std::vector<int> Ec;
    int sor = E_LuyThuaModulo_(EsoY, (EsoP - (1 + EsoX)), EsoP);
    for (int i = 0; i < Eb.size(); i++)
    {
        int decrypted_unicode = (Eb[i] * sor) % EsoP;
        Ec.push_back(decrypted_unicode);
    }
    //Chuyển mảng số thành chuỗi Unicode
    std::wstring wstr_decrypted;
    for (int i = 0; i < Ec.size(); i++)
    {
        wstr_decrypted += static_cast<wchar_t>(Ec[i]);
    }
    //Chuyển chuỗi Unicode thành chuỗi UTF-8
    std::string utf8_output = convert.to_bytes(wstr_decrypted);
    //Trả về chuỗi gốc
    return utf8_output;
}

void MainWindow::on_btMaHoa_clicked()
{
    if (danhDau != 1)
    {
        QMessageBox::warning(this, "Thông Báo ","Bạn chưa chọn khóa ");
    }
    else
    {
        if (ui->txtBanRo->text() =="")
        {
            QMessageBox::warning(this, "Thông Báo ","Bạn cần nhập chuỗi mã hóa ");
        }
        else
        {
            //if (danhDau == 1)
            // {
            //ui->txt_maHoaBanRo->text() = "";

            std::string Egm_chuoiMaHoa = E_MaHoa( (ui->txtBanRo->text()).toStdString());
            ui->txt_maHoaBanRo->setText(QString::fromStdString(Egm_chuoiMaHoa));
            //ui->txt_banMaHoaNhanDuoc->setText(QString::fromStdString(Egm_chuoiMaHoa));
            danhDau = 2;
            ui->txtBanRo->setEnabled(false);
            ui->txt_maHoaBanRo->setEnabled(false);
            //ui->txt_banMaHoaNhanDuoc->setEnabled(false);
            ui->btMaHoa->setEnabled(false);
            ui->btGiaiMa->setEnabled(true);
            //}
        }
    }
}


void MainWindow::on_btGiaiMa_clicked()
{
    if (danhDau != 2)
    {
        QMessageBox::warning(this, "Thông Báo ","Bạn chưa chọn tệp giải mã ");
    }
    else
    {
        std::string Egm_chuoiGiaiMa = E_GiaMa((ui->txt_banMaHoaNhanDuoc->text()).toStdString()) ;
        ui->txt_banGiaima->setText(QString::fromStdString(Egm_chuoiGiaiMa));
        ui->btGiaiMa->setEnabled(false);
        ui->txt_banGiaima->setEnabled(false);
    }
}


void MainWindow::on_btTaoBanRoMoi_clicked()
{
    reset();
    ui->btMaHoa->setEnabled(false);
    ui->btGiaiMa->setEnabled(false);
    ui->txtBanRo->setEnabled(true);
    ui->txt_maHoaBanRo->setEnabled(true);
    ui->txt_banMaHoaNhanDuoc->setEnabled(true);
    ui->txt_banGiaima->setEnabled(true);

}


void MainWindow::on_btThoat_clicked()
{
    this->close();
}

QString readTextFile(const QString& fileName)
{
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return QString();

    QTextStream in(&file);
    QString contents = in.readAll();

    file.close();
    return contents;
}


void MainWindow::on_btn_ChonFile_clicked()
{

    QString fileName = QFileDialog::getOpenFileName(nullptr, "Open Text File", "", "Text Files (*.txt)");
    if (fileName.isNull()) {
        QMessageBox::warning(this, "Thông Báo ","Bạn chưa chọn file ");
    } else {
        ui->txtBanRo->setText(readTextFile(fileName));
        if (ui->txtBanRo->text() == "") {
            QMessageBox::warning(this, "Thông Báo ","File không có nội dung ");
        }

    }

}







void MainWindow::on_btn_ChonFile_2_clicked()
{ //sai
    QString fileName = QFileDialog::getOpenFileName(nullptr, "Open Text File", "", "Text Files (*.txt)");
    if (fileName.isNull()) {
        QMessageBox::warning(this, "Thông Báo ","Bạn chưa chọn file ");
    } else {
        ui->txt_banMaHoaNhanDuoc->setText(readTextFile(fileName));
        if (ui->txt_banMaHoaNhanDuoc->text() == "") {
            QMessageBox::warning(this, "Thông Báo ","File không có nội dung ");
        }

    }
    ui->txt_banMaHoaNhanDuoc->setEnabled(false);
}


void MainWindow::on_btn_LuuFile_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(nullptr, "Lưu tập tin", "", "Tập tin văn bản (*.txt)");

    if (!fileName.isEmpty()) {
        // Tạo chuỗi để ghi vào tập tin
        //QString createText = "Your text here\n";

        // Mở tập tin để ghi
        QFile file(fileName);
        if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            // Ghi chuỗi vào tập tin
            QTextStream out(&file);
            out << ui->txt_maHoaBanRo->text();
            file.close();
            QMessageBox::information(nullptr, "Thông báo", "Lưu file thành công");
        } else {
            QMessageBox::critical(nullptr, "Lỗi", "Không thể mở tập tin để ghi");
        }
    }
}


