#include "flexlist.h"
#include "ui_flexlist.h"

FlexList::FlexList(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FlexList)
{
    ui->setupUi(this);
    std::srand(QDateTime::currentMSecsSinceEpoch() / 1000);
    for(int i = 0; i < 50; i++) {
        ui->listWidget->addItem(generateRandomWords(3,6));
    }

    for(int i = 0; i < 20; i++) {
        ui->listWidget_2->addItem(generateRandomWords(5,7));
    }
    QString browserText = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Nulla malesuada pellentesque elit eget gravida cum. Ultricies mi quis hendrerit dolor. Lectus quam id leo in vitae turpis massa sed elementum. Luctus venenatis lectus magna fringilla urna. Sollicitudin ac orci phasellus egestas tellus rutrum tellus. Eget est lorem ipsum dolor sit amet consectetur. Adipiscing tristique risus nec feugiat in fermentum posuere urna nec. Sed elementum tempus egestas sed sed risus pretium quam. Eget velit aliquet sagittis id consectetur purus ut faucibus. Risus sed vulputate odio ut enim blandit volutpat maecenas volutpat. Lacus vel facilisis volutpat est velit egestas. Massa sed elementum tempus egestas sed sed. Blandit volutpat maecenas volutpat blandit.\n\nQuam nulla porttitor massa id neque aliquam vestibulum morbi blandit. Est velit egestas dui id ornare arcu odio. Eget nulla facilisi etiam dignissim diam. Condimentum mattis pellentesque id nibh. Suspendisse sed nisi lacus sed viverra tellus. Ut tellus elementum sagittis vitae et leo duis ut diam. Neque gravida in fermentum et sollicitudin ac orci phasellus. Ultricies mi quis hendrerit dolor magna eget est lorem. Sit amet mauris commodo quis imperdiet. Ut pharetra sit amet aliquam id diam. Volutpat est velit egestas dui id ornare arcu odio ut. Mauris vitae ultricies leo integer malesuada nunc. Ut sem viverra aliquet eget sit amet tellus cras. Odio tempor orci dapibus ultrices in iaculis nunc sed augue. Vestibulum rhoncus est pellentesque elit.";
    ui->textBrowser_3->setPlainText(browserText);
}

FlexList::~FlexList()
{
    delete ui;
}

QString FlexList::generateRandomWords(int numberOfWords, int lengthOfWord) {

    std::string randomWords = "";

    while(numberOfWords--){
        for(int i = 0; i < lengthOfWord; i++){
            if(rand() % 2 == 0 ){ // capital or small letter
                randomWords += 'A' + (rand() % 26);
            }else{
                randomWords += 'a' + (rand() % 26);
            }
        }
        if( numberOfWords != 0 ){
            randomWords += " ";
        }

    }
    return QString::fromStdString(randomWords);
}



