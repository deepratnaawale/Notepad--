#include "includes/aboutme.h"
#include "ui_aboutme.h"

AboutMe::AboutMe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutMe)
{
    ui->setupUi(this);
    QPalette p = ui -> textBrowser -> palette();
    p.setColor(QPalette::Base, "#1e1e1e");
    p.setColor(QPalette::Text, Qt::white);
    ui -> textBrowser -> setPalette(p);

}

AboutMe::~AboutMe()
{
    delete ui;
}


void AboutMe::on_viewCertificationsBtn_clicked()
{
    QString url = "https://www.deepratnaawale.com/resume";
    QDesktopServices::openUrl(url);
}

void AboutMe::on_hireMeBtn_clicked()
{
    QString url = "https://www.deepratnaawale.com/contact";
    QDesktopServices::openUrl(url);
}

void AboutMe::on_viewProjectsBtn_clicked()
{
    QString url = "https://www.deepratnaawale.com/projects";
    QDesktopServices::openUrl(url);
}

void AboutMe::on_viewBlogBtn_clicked()
{
    QString url = "https://www.deepratnaawale.com/blog";
    QDesktopServices::openUrl(url);
}
